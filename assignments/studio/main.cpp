/* 
Name: Kyra Apodaca
Date: 09/07/2022

This program will prompt the user to enter their full name and store it in a variable 
and print the seven stages of hangman to the console

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
string fullName;

cout << "Please enter your full name to continue..." << endl;
getline(cin, fullName);

cout << "Hello " << fullName << "!!!" << endl;

cout << "     |----------" << endl;
cout << "     |/    |" << endl;
cout << "     |" << endl;
cout << "     |" << endl;
cout << "     |" << endl;
cout << "     |" << endl;
cout << "     |" << endl;
cout << "===========" << endl;


return 0;
}