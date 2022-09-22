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
float promptMoney();
string whereToGo(float);

int main(int argc, char *argv[]){
    float pocketChange;

    if (argc >= 2 && argv[1] == (string)"test") {
        tests();
        return 0;
    }

    greetUser();

    pocketChange = promptMoney();

    whereToGo(pocketChange);

    return 0;
}

void tests() {
    assert(whereToGo(16) == "McAlister's, half a sandwhich and half a salad is all you can afford...\n");
    assert(whereToGo(24) == "McAlister's, half a sandwhich and half a salad is all you can afford...\n");
    assert(whereToGo(123.54) == "Olive Garden, spending the big bucks...\n");
    cout << "All test cases passed" << endl;
}

string whereToGo(float money) {
    if (money == 0) {
        //cout << "You should eat at home" << endl;
        return "You should eat at home\n";
    } else if (money <= 5) {
        //cout << "McDonald's, I'm lovin it..." << endl;
        return "McDonald's, I'm lovin it...\n";
    } else if (money <= 10) {
        //cout << "Arby's, They have the meats..." << endl;
        return "Arby's, They have the meats...\n";
    } else if (money <= 15) {
       // cout << "Chipotle, maybe get e-coli... and queso!" << endl;
       return "Chipotle, maybe get e-coli... and queso!\n";
    } else if (money <= 50) {
        //cout << "McAlister's, half a sandwhich and half a salad is all you can afford..." << endl;
        return "McAlister's, half a sandwhich and half a salad is all you can afford...\n";
    } else {
        //cout << "Olive Garden, spending the big bucks..." << endl;
        return "Olive Garden, spending the big bucks...\n";
    }
}

float promptMoney() {
    float money;

    cout << "How much money do you have in your pocket?" << endl;
    cin >> money;

    if (money < 0) {
        cout << "You must have a positive amount of money" << endl;
        money = promptMoney();
    }
    return money;
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