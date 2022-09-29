#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main(int argc, char *argv[]) {
    int numLines;

    cin >> numLines;

    for (int i = 1; i <= numLines; i++) {
        cout << i << "Abracadabra" << endl;
    }
    return 0;
}