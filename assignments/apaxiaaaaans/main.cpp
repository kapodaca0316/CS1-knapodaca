/*
Name: Kyra Apodaca
Date: 11/02/2022

Kattis apaxiaaaaans

Steps: 
1. Take in a string
2. Pass string to an array and identify length
3. Write a for loop that compares a letter with the one before it 
    if letters match, output one instance of that letter

*/


#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char* argv[]) {
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
}

string answer(const string &line) {
    char previous = ' '; 
    string output;
    int len = line.length(); 
    char char_array[len + 1];
    strcpy(char_array, line.c_str());
    for (int i = 0; i < len; i++) {
        if (previous != char_array[i]) {
            output = output + char_array[i];
        }
        previous = char_array[i];
    }
    return output;
    
}

void testAnswer() {
    assert(answer("crrrrazy") == "crazy");
    assert(answer("cappree") == "capre");
    assert(answer("trisscuit") == "triscuit");

    cerr << "All test cases passed!\n";
}

void solve() {
    string line;
    cout << "Please enter a word in lower case, no spaces..." << endl;
    cin >> line;
    cout << answer(line) << endl;
}