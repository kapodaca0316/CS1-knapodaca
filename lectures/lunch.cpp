/*
Name: Kyra Apodaca
Date: 9/22/2022
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void promptName(string&);
void greetUser();

int main(int argc, char *argv[]){
    float pocketChange;

    greetUser();

    pocketChange = promptMoney();

    return 0;
}

float promptMoney() {
    float money;

    cout << "How much money do you have in your pocket?" << endl;
    cin >> money;

    if (money < 0) {
        cout << "You must have a positive amount of money" << endl;
        promptMoney();
    }
}

void promptName(string &name){
    cout << "Please enter your first name:" << endl;
    getline(cin, name);
}

void greetUser() {
    string firstName;

    promptName(firstName);

    cout << "Welcome to my lunch decision program, " << firstName << endl;
}