#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void promptName();
void greetUser();
void calcArea(float*, float*, float*);
float* calcPerim(float*, float*);

int main() {
    string *firstName ;
    float side1;
    float *s1;
    float *side2 = new string();
    float *area = new float();
    float *perimeter = new float();

    s1= &side1;

    promptName(firstName);
    greetUser(*firstName);
    getSides(s1, side2);
    calcArea(s1, side2, area);

    cout << "DEBUG: " << *area << endl;

    delete firstName;
    delete side2;
    delete area;

    return 0;
}

void promptName(string*) {

    cout << "Please enter your first name..." << endl;
    getline(cin, *name);
}

void greetUser(string* firstName) {
    cout << "Hello " << *firstName << "!" << endl;
}

void getSides(float *s1, float *s2){
    cout << "please enter the two sides of your rectangle separated by a space" << endl;
    
}

void calcArea(float*s1, float*s2, float*area){
    *area = *s1 * *s2;
}

float* calcPerim(float*s1, float*s2){
 
}
// int rectangleSide() {
//     int rectSide;
    
//     cout << "Please enter a side of the rectangle: ";
//     cin >> rectSide;

//     return rectSide;
// }

// int calcArea(int s1, int s2) {
//     int area;

//     area = s1 * s2;

//     return area;
// }

// int calcPerim(int s1, int s2) {
//     int perim;

//     perim = (2 * s1) + (2 * s2);

//     return perim;
// }

// void printVals(int area, int perim) {
//     cout << "The area and perimeter of the rectangle is: "
//     << area << " and " << perim << endl;
// }
    
