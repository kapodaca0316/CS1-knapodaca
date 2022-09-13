/*
Name: Kyra Apodaca 
Date:09/13/2022

Rectangle calculator
    uses functions to calculate area and perimeter
*/

#include <iostream>
#include <string>

using namespace std;

//prompt for user's name
string getName() {
    string name;

    cout << "Please enter your first name..." << endl;
    cin >> name;

    return name;
}

void greetUser(string name) {
    //string name
    //name = getName();
    cout << "Hello " << name << "!" << endl;
}

int rectangleSide() {
    int rectSide;
    
    cout << "Please enter a side of the rectangle: ";
    cin >> rectSide;

    return rectSide;
}

int calcArea(int s1, int s2) {
    int area;

    area = s1 * s2;

    return area;
}

int calcPerim(int s1, int s2) {
    int perim;

    perim = (2 * s1) + (2 * s2);

    return perim;
}

void printVals(int area, int perim) {
    cout << "The area and perimeter of the rectangle is: "
    << area << " and " << perim << endl;
}
    

int main() {
    int side1, side2;
    int area, perim;
    string name;
    name = getName();
    greetUser(name);

    side1 = rectangleSide();
    side2 = rectangleSide();

    area = calcArea(side1, side2);

    perim = calcPerim(side1, side2);

    printVals(area, perim);

    return 0;
}