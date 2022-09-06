/* 
Name: Kyra Apodaca
Date: 9/6/22

This program will calculate a rectangle

Step 1: prompt for the users name
Step 2: greet the user
Step 7: prompt for sides of a rectangle 
Step 8: calculate the area of a rectangle
Step 9: calculate the perimeter of a rectangle
Step 10: print the area and perimeter of a rectangle

*/

#include <iostream>
#include <string>

using namespace std;

int main () {
    string firstName;
    float side1, side2;
    float area, perimeter; 

   //Step 1:
    cout << "Welcome to my Rectangle Calculator!\n";
    cout << "Please enter your first name: ";
    getline(cin, firstName);

    //Step 2:
    cout << "Hello " << firstName << "!" << endl;

    //Step 7:
    cout << "Please enter the two sides of your rectangle separated by a space: ";
    cin >> side1 >> side2;

    //cout << "DEBUG: side1: " << side1 << endl;
    //cout << "DEBUG: side2: " << side2 << endl; 

    //Step 8:
    area = side1 * side2;

    //Step 9:
    perimeter = (2*side1) + (2*side2);

    //cout << "DEBUG: area: " << area << endl;
    //cout << "DEBUG: perimeter: " << perimeter << endl;

    //Step 10:
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    //cout << "The rectangle with sides " << side1 
    // << " and " << side2 
    //<< " has an area of " << area 
    //<< " and a peimeter of " << perimeter << endl;

    return 0; 
}