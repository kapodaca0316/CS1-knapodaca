/*
Name: Kyra Apodaca
Date: 09/12/2022

C++ functions
*/

#include <iostream>
#include <string>

using namespace std;

void greetPerson(){
    cout << "Hello" << endl;
}

string sayHello(){
    string name;
    cout << "Hi there!";
    cin >> name;

    return name;
}

int getAge() {
    int yourAge;

    cout << "Please neter your age: ";
    cin >> yourAge;

    return yourAge;
}

int add2(int num1) {
    int newNum;

    newNum = num1 +2;
    return newNum;
}

int main () {
    string fname;
    int someAge;

    fname = sayHello();
    someAge = getAge();
    //sayHello();
    //sayHello();
    //sayHello();
    greetPerson();
    cout << "your name is " << fname << endl;
    cout << "your age is: " << someAge << endl;

    return 0;
}