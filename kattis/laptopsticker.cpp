/*
Name: Kyra Apodaca
Date: 09/22/2022

Kattis: Laptop Sticker porblem
*/

#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int willItFit(int, int, int, int);

int main(int argc, char *argv[]) {
    int wc, hc, ws, hs;

    if (argc >=2 && argv[1] == (string) "test") {
        tests();
        return 0;
    }

    cin >> wc >> hc >> ws >> hs;

    cout << willItFit(wc, hc, ws, hs) << endl;

    // if (wc-2 >= ws && hc-2 >= hs) {
    //     cout << 1 << endl;
    //  } else {
    //     cout << 0 << endl;
    //  }

    return 0;
}

void tests() {
    assert(willItFit(1, 2, 3, 4) == 0);
    assert(willItFit(5, 6, 7,8) == 0);
    assert(willItFit(8, 7, 6, 5) == 1);
    cout << "all test cases passed" << endl;
}

int willItFit(int wc, int hc, int ws, int hs) {
    if (wc-2 >= ws && hc-2 >= hs) {
        //cout << 1 << endl;
        return 1;
     } else {
        //cout << 0 << endl;
        return 0;
     }
}