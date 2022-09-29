/*
Name: Kyra Apodaca
Date: 9/28/2022
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string fizzBuzz(int, int, int);
void tests();

int main(int argc, char *argv[]) {
    tests();
    int x, y, n;
    string outstring;

    cin >> x >> y >> n;

    outstring = fizzBuzz(x, y, n);
    // for (int i = 1; i <= n; i++) {
    //     if (i%x == 0) {
    //         cout << "Fizz";
    //     } 
    //     if (i%y == 0) {
    //         cout << "Buzz";
    //     }
    //     if (i%x != 0 && i%y != 0) {
    //         cout << 1;
    //     }
    //     cout << endl;
    // }
    cout << outstring;

    return 0;
}

void tests() {
    assert(fizzBuzz(3, 5, 7)) == "1\n, 2\n";
}

string fizzBuzz(int x, int y, int n) {
    string output;
    for (int i = 1; i <= n; i++) {
        if (i%x == 0) {
            output += "Fizz";
        } 
        if (i%y == 0) {
            output += "Buzz";
        }
        if (i%x != 0 && i%y != 0) {
            output += to_string(i);
        }
        //cout << endl;
        output += "\n";
    }
    return output;
}