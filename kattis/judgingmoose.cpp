/*
Name: Kyra Apodaca
Date: 9/28/2022

*/

#include <iostream>
// #include <cmath>
// #include <cassert>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int leftSide, rightSide;

    cin >> leftSide >> rightSide;

    if (leftSide == rightSide && leftSide ==0) {
        cout << "Not a moose" << endl;
        return 0;
    }

    if (leftSide == rightSide) {
        cout << "Even " << 2*leftSide << endl;
    } else if (leftSide > rightSide) {
        cout << "Odd " << 2*rightSide << endl;
    } else {
        cout << "Odd " << 2*rightSide << endl;
    }

    return 0;
}