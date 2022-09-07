/*
Name: Kyra Apodaca
Date: 09/07/2022
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main () {
//cout << pow(2, 2) << endl;
    float num1;
    int squared = 2;
    
    cout << "Please enter a number to square: ";
    cin >> num1;

    cout << num1 << "Squared is: "
         << pow(num1, squared) << endl;

return 0;
}