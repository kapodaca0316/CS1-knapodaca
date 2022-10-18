/*
Nanme: Kyra Apodaca
Date: 10/10/2022

Steps:
1- Define a function that takes 5 numbers, calculates and returns the sum of the numbers
2- Define a function that takes 5 numbers, calculates and returns the product of the numbers
3- Define a function that takes 5 numbers, calculates and returns the average of the numbers
    Must call the function you defined earlier to find the sum of the five numbers
4- Define a function that takes 5 numbers, finds and returns the largest value among the numbers
    Must use your own conditional statements and NOT use any built-in function
5- Define a function that takes 5 numbers, finds and returns the smallest value among the numbers 
    Must use your own conditional statements and NOT use any built-in function
6- Define a function that takes five numbers 
    returns if the floor of the sum of those numbers is even, odd or zero
7- At least one function must be templated to work on various types
8- Greet the user by their name and prompt them to enter 5 numbers
9- Display menu options for each function
    call the specific function based on the user's choice
    calculate the result using switch statement 
    display the result with proper descriptions
10- Define a function called test
    For each of the functions you defined above write at least 3 automated test cases 
    using assert statements to automatically test 
    verify that the functions provide correct results 
    Try to come up with corner cases (various data) to confirm the functions 
    still provide the correct results.
11- Call the test function only if the “test” argument is passed to main
10 bonus points will be given if you make your program continue to run and 
    calculate the statistical values of as many sets of 5 numbers as a user wishes 
    until they want to quit the program.
*/

#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
#include <cstdio>

using namespace std;

void getNums(double &, double &, double &, double &, double &);
double findSum(const double &, const double &, const double &, const double &, const double &);
template <class T1, class T2, class T3, class T4, class T5>
T1 findProduct(T1 n1, T2 n2, T3 n3, T4 n4, T5 n5);
void findAverage(const double &, const double &, const double &, const double &, const double &, double &);
double findLargest(const double &, const double &, const double &, const double &, const double &);
double findSmallest(const double &, const double &, const double &, const double &, const double &);
double findFloor(const double &, const double &, const double &, const double &, const double &);
bool screen();
void test();


int main(int argc, char *argv[]) {
    bool keeprunning = true;
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); 
    }
    else {
        while (true) {
            if (!screen())
                break; 
            cin.ignore(100, '\n');
            cout << "Press enter to continue...";
            cin.get();
        }
    }
    cin.ignore(100, '\n');
    cout << "Press enter to quit the program.\n";
    cout << "Have a good one!" << endl;
    cin.get();
    
    return 0;
}

void printMenu() {
    cout << "Please chose an option from below:\n";
    cout << "(1) Find Sum\n";
    cout << "(2) Find Product\n";
    cout << "(3) Find Average\n";
    cout << "(4) Find Largest\n";
    cout << "(5) Find Smallest\n";
    cout << "(6) Oddity" << endl;
}

void greetUser() {
    string yourName;
    cout << "Hello! What's your first name?" << endl;
    getline(cin, yourName);
    cout << "Welcome " << yourName << ", to my Homework 4 assignment!" << endl;
}

void getNums(double &n1, double &n2, double &n3, double &n4, double &n5) {
    cout << "Please enter 5 numbers separated by a space...";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

double findSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return (n1 + n2 + n3 + n4 + n5);
}

template <class T1, class T2, class T3, class T4, class T5>
T1 findProduct(T1 n1, T2 n2, T3 n3, T4 n4, T5 n5) {
    T1 product;

    product = n1 * n2 * n3 * n4 * n5;

    return product;
}

void findAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5, double &avg) {
    avg = findSum(n1, n2, n3, n4, n5)/5;
}

double findLargest(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
     if (n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5) {
        cout << n1;
    } else if (n2 >= n1 && n2 >= n3 && n2 >= n4 && n2 >= n5) {
        cout << "The largest number is: " << n2 << endl;
    } else if (n3 >= n1 && n3 >= n2 && n3 >= n4 && n3 >= n5) {
        cout << "The largest number is: " << n3 << endl;
    } else if (n4 >= n1 && n4 >= n2 && n4 >= n3 && n4 >= n5) {
        cout << "The largest number is: " << n4 << endl;
    } else if (n5 >= n1 && n5 >= n2 && n5 >= n3 && n5 >= n4) {
        cout << "The largest number is: " << n5 << endl;
    } else if (n1 == n2 && n1 == n3 && n1 == n4 && n1 == n5) {
        cout << "The numbers are all the same" << endl;
    }
}

double findSmallest(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
     if (n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5) {
        cout << "The smallest number is: "<< n1;
    } else if (n2 <= n1 && n2 <= n3 && n2 <= n4 && n2 <= n5) {
        cout << "The smallest number is: " << n2 << endl;
    } else if (n3 <= n1 && n3 <= n2 && n3 <= n4 && n3 <= n5) {
        cout << "The smallest number is: " << n3 << endl;
    } else if (n4 <= n1 && n4 <= n2 && n4 <= n3 && n4 <= n5) {
        cout << "The smallest number is: " << n4 << endl;
    } else if (n5 <= n1 && n5 <= n2 && n5 <= n3 && n5 <= n4) {
        cout << "The smallest number is: " << n5 << endl;
    } else if (n1 == n2 && n1 == n3 && n1 == n4 && n1 == n5) {
        cout << "The numbers are all the same" << endl;
    }
}

// double findFloor(const double &, const double &, const double &, const double &, const double &) {
//     double sum;
//     sum = findSum();
//     floor(sum);
// }


void test() {
    double answer = findSum(10, 12.5, 32, -9, 1);
    double expected = 46.5;
    assert(answer == expected); 
    
    assert(findSum(-5, 10.5, 2, 19, 0) == 26.5);
    assert(findSum(-52, 130.5, 2.223, 19, 4) == 103.723);
    assert(findSum(-235, 10.985, 234, -8919, 1) == -8908.015);
    
    assert(findProduct(6, 9, 24, 45, 2) == 116640);
    assert(findProduct(-2, 8, 12, 1, 3) == -576);
    assert(findProduct(-7, 83, .12, 1.09, 3) == -227.9844);
   
    assert(findLargest(28, 5, 7, 92, -2) == 92);
    assert(findLargest(-7, 10, -9, 12, 4) == 12);
    assert(findLargest(800, 189, -799, 11, 409) == 800);
    
    assert(findSmallest(-2.0009, -1.999, 18, 10.087, 32) == -2.0009);
    assert(findSmallest(4, 18, -290, 82, 10) == -290);
    assert(findSmallest(42, 128, -.290, 82, 1.0201) == -.290);
    
    double avg;
    findAverage(6, 2, 3, 19, 302, avg);
    assert(avg == 66.4);
    findAverage(8, 2, 3, 87, 26, avg);
    assert(avg == 25.2);
    findAverage(82, 902, 3, .8987, 29, avg);
    assert(avg == 203.37974);

    cout << "All test cases passed!" << endl;
}

bool screen() {
    int option = 1;
    double num1=0, num2=0, num3=0, num4=0, num5=0;
    printMenu();
    do {
        if (cin >> option && option >= 1 && option <= 6) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);

switch (option) {
    case 1:
    {
        getNums(num1, num2, num3, num4, num5);
        double sum = findSum(num1, num2, num3, num4, num5);
        printf("The sum of %.2f, %.2f, %.2f, %.2f, and %.2f is : %.2f\n", num1, num2, num3, num4, num5, sum);
        break;
    }
    case 2:
    {
        getNums(num1, num2, num3, num4, num5);
        double product = findProduct(num1, num2, num3, num4, num5);
        printf("The product of %.2f, %.2f, %.2f, %.2f, and %.2f is : %.2f\n", num1, num2, num3, num4, num5, product);
        break;
    }
    case 3:
    {
        double avg;
        getNums(num1, num2, num3, num4, num5);
        findAverage(num1, num2, num3, num4, num5, avg);
        printf("The average between %.2f, %.2f, %.2f, %.2f, and %.2f is : %.2f\n", num1, num2, num3, num4, num5, avg);
        break;
    }
    case 4:
    {
        getNums(num1, num2, num3, num4, num5);
        double max = findLargest(num1, num2, num3, num4, num5);
        break;
    }
    case 5:
    {
        getNums(num1, num2, num3, num4, num5);
        double min = findSmallest(num1, num2, num3, num4, num5);
        break;
    }
    case 6: 
    {
        cout << "Not complete" << endl;
        default:
        return false;
    }
}
return true;
}

