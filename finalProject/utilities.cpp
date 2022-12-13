#include "includes.h"

int readValue(int numOpts) {
    int opt = 1;

    do {
        if (cin >> opt && opt >= 1 && opt <= numOpts) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 4" << endl;
        }
    } while (true);

    return opt;
}

void makeArray(vector<string> & secret, const string fileInput) {
    int counter = 0;
    string line;
    fstream fin;

    fin.open("../finalProject/" + fileInput);
    
    if (fin.is_open()) {
    while (getline(fin, line)) {
        secret.push_back(line);
    }
    fin.close();
    } else 
    cout << "File not found" << endl;
}

void printArray(vector<string> & letterBank, int len) {
	cout << "Letter Bank: ";
    for (int i = 0; i < letterBank.size(); i++) {
        cout << letterBank[i];
    }
}