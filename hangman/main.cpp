/*
Conditional Lab
Name: Kyra Apodaca 
    Hang Man
Date: 12/01/2022
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>
 
using namespace std;
 

void printDifficulty();
void printEasy();
void printMedium();
void printHard();
int readValue(int);
void checkLetter();
bool program();


void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    bool keeprunning = true;
    if(argc == 2 && string(argv[1]) == "test") {
        //test();
        exit(EXIT_SUCCESS);
    }
    else {
        while (true) {
            if (!program()) 
                break; 
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;
}

void printDifficulty() {
    cout << "Choose difficulty:\n";
    cout << "[1] Easy\n";
    cout << "[2] Medium\n";
    cout << "[3] Hard\n";
    cout << "[4] Quit the program\n";
    cout << "Enter one of the menu options [1-4]: ";
}

void printEasy() {
    cout << "Choose a category:\n";
    cout << "[1] Winter Holiday\n";
    cout << "[2] Pizza Toppings\n";
    cout << "[3] Colors\n";
}

void printMedium() {
    cout << "Choose a category:\n";
    cout << "[1] Flower Names\n";
    cout << "[2] Ice Cream Flavors\n";
    cout << "[3] Types of Tools\n";
}

void printHard() {
    cout << "Choose a category:\n";
    cout << "[1] Dog Breeds\n";
    cout << "[2] Ocean Animals\n";
    cout << "[3] Olympic Sports\n";
}

bool program() {
    int option = 1; 
    fstream fileInput;
     
    printDifficulty();
    
    readValue(4);
            
    switch(option) {
        case 1:
        {
            printEasy();
            int category = readValue(3);

            switch(option) {
                case 1:
                {
                    fileInput.open("../labs/files/winterholiday.txt", ios_base::ate);
                    break;
                }
                case 2:
                {
                    fileInput.open("../labs/files/pizzatoppings.txt", ios_base::ate);
                    break;
                }
                case 3:
                {
                    fileInput.open("../labs/files/colors.txt", ios_base::ate);
                    break;
                }
            }
            break;
        }
        case 2:
        {
            printMedium();
            int category = readValue(3);

            switch(option) {
                case 1:
                {
                    fileInput.open("../labs/files/flowers.txt", ios_base::ate);
                    int counter = 0;
                    string line;
                    secret[0];
    
                    if (fileInput.is_open()) {
                    while (getline(fileInput, line)) {
                        secret.push_back(line);
                        fileInput.close();
                    }
    } else 
        cout << "File not found" << endl;
                    break;
                }
                case 2:
                {
                    fileInput.open("../labs/files/icecreamflavors.txt", ios_base::ate);
                    break;
                }
                case 3:
                {
                    fileInput.open("../labs/files/tools.txt", ios_base::ate);
                    break;
                }
            }
            break;
        }
        case 3:
        {
            printHard();
            int category = readValue(3);

            switch(option) {
                case 1:
                {
                    fileInput.open("../labs/files/dogbreeds.txt", ios_base::ate);
                    break;
                }
                case 2:
                {
                    fileInput.open("../labs/files/oceananimals.txt", ios_base::ate);
                    break;
                }
                case 3:
                {
                    fileInput.open("../labs/files/olympicsports.txt", ios_base::ate);
                    break;
                }
            break;
        }
        case 4:
        {
        default:
            return false;
        }
    }
    return true;
}
}

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

void checkLetter() {
    char guess;

    cout << "     |----------" << endl;
    cout << "     |/    |" << endl;
    cout << "     |" << endl;
    cout << "     |" << endl;
    cout << "     |" << endl;
    cout << "     |" << endl;
    cout << "     |" << endl;
    cout << "===========" << endl;
    cout << endl;

    
    cout << "Guess a letter: " << endl;
    cin >> guess;

    if (guess == 'r'){

    }
}


string secretWord() {

}

void makeArray(string word[0], const string fileInput) {
    
}