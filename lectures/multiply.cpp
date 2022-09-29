/*
Name: Kyra Apodaca
Date: 9/27/22

Create a multiplication table using a loop 
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cassert>

using namespace std;

int main(int argc, char *argv[]) {

    //cout << "  ";
    for (int i = 1; i <= 12; i++){
        cout << right << setw(3) << i;
    }
    cout << endl << setw(48) << setfill('-') << "" << endl;
    cout << setfill(' ');
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 12; j++) {
            cout << right << setw(3) << i*j << " ";
        }
        cout << endl;
    }
    return 0;
}