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
 

void printDifficulty(void);
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

void printDifficulty(void) {
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
    
    do {
        if (cin >> option && option >= 1 && option <= 4) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);
            
    switch(option) {
        case 1:
        {
            printEasy();

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

            switch(option) {
                case 1:
                {
                    fileInput.open("../labs/files/flowers.txt", ios_base::ate);
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
        default:
            return false;
    }
    return true;
}
