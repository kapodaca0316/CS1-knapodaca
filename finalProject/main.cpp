/*
Conditional Lab
Name: Kyra Apodaca 
    Hang Man
Date: 12/01/2022
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
 
using namespace std;
 

void printDifficulty();
void printEasy();
void printMedium();
void printHard();
bool program();
int readValue(int);
string randomWord(vector<string> &);
string display(string);
bool checkLetter(string, string *, vector<char> &);
void printGallows(int);

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
    vector<string> secret;
    string inFile, randWord;
    vector<string> letterBank;
     
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
                    inFile = "winterholiday.txt";
                    makeArray(secret, inFile);
                    randWord = randomWord(secret);
                    break;
                }
                case 2:
                {
                    fileInput.open("../finalProject/files/pizzatoppings.txt", ios_base::ate);
                    break;
                }
                case 3:
                {
                    fileInput.open("../finalProject/files/colors.txt", ios_base::ate);
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
                    fileInput.open("../finalProject/files/flowers.txt", ios_base::ate);
                    break;
                }
                case 2:
                {
                    fileInput.open("../finalProject/files/icecreamflavors.txt", ios_base::ate);
                    break;
                }
                case 3:
                {
                    fileInput.open("../finalProject/files/tools.txt", ios_base::ate);
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
                    fileInput.open("../finalProject/files/dogbreeds.txt", ios_base::ate);
                    break;
                }
                case 2:
                {
                    fileInput.open("../finalProject/files/oceananimals.txt", ios_base::ate);
                    break;
                }
                case 3:
                {
                    fileInput.open("../finalProject/files/olympicsports.txt", ios_base::ate);
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

void makeArray(vector<string> & secret, const string fileInput) {
    int counter = 0;
    string line;
    fstream fin;

    fin.open("../finalProject/files/" + fileInput);
    
    if (fin.is_open()) {
    while (getline(fin, line)) {
        secret.push_back(line);
    fin.close();
    }
    } else 
    cout << "File not found" << endl;
}

string randomWord(vector<string> & secret) {
    secret.size();
    
    srand(time(0));

    int secretNumber = 1 + (rand() % 20);

    string word = secret[secretNumber];

    return word;
}

string display(string word) {
    int len = word.length();
    string hiddenWord(len, '-');

    return hiddenWord;
}

bool checkLetter(string word, string *hiddenWord, vector<string> & letterBank) {
    string guess;
    bool found = false;

    cout << "Guess a letter: " << endl;
    cin >> guess;
    
    int pos = word.find(guess);

    letterBank.push_back(guess);

    if (pos != string::npos) {
        do {
            (*hiddenWord).replace(pos, 1, guess);
            pos = word.find(guess, pos + 1);
        } while (pos != string::npos);
            found = true;
    }
    
    return found;
}

void printArray(vector<char> & letterBank, int len) {
	cout << "[ ";
	for (int i = 0; i < len; i++)
		cout << letterBank << " ";
	cout << "]" << endl;
}

void printGallows(int added) {
    switch(added) {
        case 0:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
        }

        case 1:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
        }

        case 2:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |     |" << endl;
            cout << "     |     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
        }

        case 3:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|" << endl;
            cout << "     |     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
        }

        case 4:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|\\" << endl;
            cout << "     |     |" << endl;
            cout << "     |" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
        }

        case 5:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|\\" << endl;
            cout << "     |     |" << endl;
            cout << "     |    /" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
        }

        case 6:
        {
            cout << "     |----------" << endl;
            cout << "     |/    |" << endl;
            cout << "     |     -" << endl;
            cout << "     |    ( )" << endl;
            cout << "     |     -" << endl;
            cout << "     |    /|\\" << endl;
            cout << "     |     |" << endl;
            cout << "     |    / \\" << endl;
            cout << "     |" << endl;
            cout << "===========" << endl;
        }
    }
}

