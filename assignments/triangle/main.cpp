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
#include <cassert>

using namespace std;

//int calcArea( int s1, int s2, int s3);

void greetUser (string &name){
    cout << "Please enter your first name..." << endl;
    getline(cin, name);

    cout << "Hello " << name << "! Welcome to my Triangle Calculator!" << endl;
}

float triangleSide() {
    float triSide;
    
    cout << "Please enter side one of the triangle: ";
    cin >> triSide;

    return triSide;
}

float triSide3() {
    float triSide3;

    cout << "Please enter the third side for the triangle (this side must be the largest of the three)" 
    << endl;
    cin >> triSide3;

    return triSide3;
}

float calcArea(int s1, int s2, int s3) {
   float s;
   float area;

    s = (s1 + s2 + s3)/2;

    area = sqrt (s*(s-s1)*(s-s2)*(s-s3));

    return area;
}

float calcPerimeter(int s1, int s2, int s3) {
    float perim;

    perim = s1 + s2 + s3;

    return perim;
}

int main () {
    string name;
    float side1, side2;
    float side3;
    float area, perim;
    int squared = 2;
//Step 1:
    greetUser(name);

//Step 2:    
    side1 = triangleSide();
    side2 = triangleSide();
    side3 = triSide3();

    if (pow(side1, squared) + pow(side2, squared) == pow(side3, squared)){
        cout << "The sides you selcted create a real triangle" << endl;
        //Step 3:
        area = calcArea(side1, side2, side3);

//Step 4:
        perim = calcPerimeter(side1, side2, side3);

//Step 5:
        cout << "The area of the triangle with sides "
        << side1 << ", " << side2 << ", " << side3 << " is: " << area << endl;

        cout << "The perimeter is: " << perim << endl;

    } else 
        cout << "The sides you selected do not create a real triangle" << endl;

// //Step 3:
//     area = calcArea(side1, side2, side3);

// //Step 4:
//     perim = calcPerimeter(side1, side2, side3);

// //Step 5:
//     cout << "The area of the triangle with sides "
//     << side1 << ", " << side2 << ", " << side3 << " is: " << area << endl;

//     cout << "The perimeter is: " << perim << endl;

    // if (pow(side1, squared) + pow(side2, squared) == pow(side3, squared)){
    //     cout << "The sides you selcted create a real triangle" << endl;
    // } else 
    //     cout << "The sides you selected do not create a real triangle" << endl;

    return 0;
}