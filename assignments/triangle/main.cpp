/*
Name: Kyra Apodaca
Date: 09/24/2022

Program will take in sides of a triangle and calculate the area and perimeter

Step 1: Greet User
    cin name and cout hello
Step 2: Take in the threee sides of a triangle
    cout ask for 3 numbers and cin side1, side2, side3
Step 3: Calculate the area
    A = sqrt s(s-a) (s-b) (s-c) [s = (a + b + c)/2]
Step 4: Calculate the perimeter
    side1 + side2 + side3
Step 5: Print out results of calculations with brief description
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//int calcArea( int s1, int s2, int s3);

void greetUser (string &name){
    cout << "Please enter your first name..." << endl;
    getline(cin, name);

    cout << "Hello " << name << "! Welcome to my Triangle Calculator!" << endl;
}

int triangleSide() {
    int triSide;
    
    cout << "Please enter side one of the triangle: ";
    cin >> triSide;

    return triSide;
}

int calcArea(int s1, int s2, int s3, int s) {
   int area;

    s = (s1 + s2 + s3)/2;

    area = sqrt (s*(s-s1)*(s-s2)*(s-s3));

    return area;
}

int main () {
    string name;
    int side1, side2, side3;
    int area, perim;

//Step 1:
    greetUser(name);

//Step 2:    
    side1 = triangleSide();
    side2 = triangleSide();
    side3 = triangleSide();

//Step 3:
    area = calcArea(side1, side2, side3);

    return 0;
}

// int calcArea(int s1, int s2, int s3, int s) {
//    int area;

//     s = (s1 + s2 + s3)/2;

//     area = sqrt (s*(s-s1)*(s-s2)*(s-s3));

//     return area;
// }