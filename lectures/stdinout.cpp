/* 
Name: Kyra Apodaca
Date: 9/5/2022
 Demonstrating cin and cout
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Please enter your name: ";
    cin >> name;
    
    cout << "Hello " << name << endl;

    return 0;
}