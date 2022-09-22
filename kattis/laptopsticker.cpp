/*
Name: Kyra Apodaca
Date: 09/22/2022

Kattis: Laptop Sticker porblem
*/

#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int main(int argc, char *argv[]) {
    int wc, hc, ws, hs;

    cin >> wc >> hc >> ws >> hs;

    if (wc-2 >= ws && hc-2 >= hs) {
        cout << 1 << endl;
     } else {
        cout << 0 << endl;
     }

    return 0;
}