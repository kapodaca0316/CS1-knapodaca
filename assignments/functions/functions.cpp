/*
Name: Kyra Apodaca
Date: 10/03/22

Basic Calculator using Functions and Automated Unit Testing

Steps:  template for ints and floats
1- greet user
2- define a function that adds two numbers and returns the sum
3- define a function that multiplies two numbers and returns the product
4- define a function that divides the first number by the second and returns the quotient
5- define a function that subtracts the second number from the first and returns the difference
6- define a function that finds and returns the remainder of the first number divided by the second
7- define a function that finds the first to the power of the second number and returns the result
8- define a function that takes a number and returns the square-root of the number
9- prompt the user to enter two numbers
    call all the functions passing those two entered numbers
10-print the calculated results with proper descriptions
12-write a test function to automatically test each function with at least two different test cases
13-write a function that finds and returns the larger of the two given numbers. 
14-call the function to test it with the same two numbers used for other functions
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

template <class T1, class T2>
T1 add2Nums(T1, T2);
template <class T1, class T2>
T1 mult2Nums(T1, T2);
template <class T1, class T2>
T1 divide2Nums(T1, T2);
template <class T1, class T2>
T1 sub2Nums(T1, T2);
template <class T1, class T2>
T1 pow2Nums(T1 n1, T2 n2);
template <class T1>
T1 sqrtNums(T1 n1);
void test();


int main(int argc, char *argv[]){
    float num1, num2;
    float added, multiplied, divided, subed, powed, sqrt, sqrt2;

    //test();

    cout << "Hello! Welcome to my homework 3!" << endl;

    cout << "Please enter a number numbers: " << endl;
    cin >> num1;
    
    cout << "Please enter another number: " << endl;
    cin >> num2;

    added = add2Nums<float, float> (num1, num2);
    multiplied = mult2Nums<float, float> (num1, num2);
    divided = divide2Nums<float, float> (num1, num2);
    subed = sub2Nums<float, float> (num1, num2);
    powed = pow2Nums<float, float> (num1, num2);
    sqrt = sqrtNums<float> (num1);
    sqrt2 = sqrtNums<float> (num2);

    cout << "Your first number plus your second = " << added << endl;
    cout << "Your first number multiplied by your second = " << multiplied << endl;
    cout << "Your first number divided by your second = " << divided << endl;
    cout << "Your second number subtracted from your second number = " << subed << endl;
    cout << "Your first number to the power of your second number = " << powed << endl;
    cout << "The square root of your first number = " << sqrt << endl;
    cout << "The square root of your second number = " << sqrt2 << endl;




    return 0;
}

template <class T1, class T2>
T1 add2Nums(T1 n1, T2 n2){
    T1 total;

    total = n1 + n2;
    
    return total;
}

template <class T1, class T2>
T1 mult2Nums(T1 n1, T2 n2){
    T1 total;

    total = n1 * n2;
    
    return total;
}

template <class T1, class T2>
T1 divide2Nums(T1 n1, T2 n2){
    T1 total;

    total = n1 / n2;
    
    return total;
}

template <class T1, class T2>
T1 sub2Nums(T1 n1, T2 n2){
    T1 total;

    total = n1 - n2;
    
    return total;
}

template <class T1, class T2>
T1 pow2Nums(T1 n1, T2 n2){
    T1 total;

    total = pow(n1, n2);
    
    return total;
}

template <class T1>
T1 sqrtNums(T1 n1){
    T1 total;

    total = sqrt(n1);
    
    return total;
}

void test() {

    assert(add2Nums(5, 24) == 29);
        assert(add2Nums(6, 4) == 10);
    assert(mult2Nums(2, 7) == 14);
        assert(mult2Nums(3, 7) == 21);
    assert(divide2Nums(42, 2 == 21));
        assert(divide2Nums(12, 3 == 4));
    assert(sub2Nums(4, 1 == 3));
        assert(sub2Nums(8, 9 == -1));
    assert(pow2Nums(6, 2 == 36));
        assert(pow2Nums(2, 3 == 8));

    cout << "All test cases passed" << endl;
}