/*
Conditional Lab
Name: Kyra Apodaca 
    Hang Man
Date: 12/01/2022

Steps:
- make nested switch to pick difficulty and word bank
- make function to choose a random word from appropriate word bank
- make a function to "hide" the random word from the player
- make a function that takes in a guess and checks to see if it is in the word
    loop this function to make sure the player can continue guessing
    make a function that chooses the switch for the correct set of gallows based on their input
    make the function break after 6 wrong guesses
    if they do not guess the word correct, print out the answer to the screen
    clear screen in between iterations 

screen display ex)
    Gallows
        skip
    Hashes for letters in word
        skip
    Guess a letter:
        skip
    Letter Bank:
*/

// #include <iostream>
// #include <iomanip>
// #include <cstdio>
// #include <string>
// #include <fstream>
// #include <vector>
// #include <algorithm>
 
// using namespace std;
#include "hangman.h"
 

// void printDifficulty();
// void printEasy();
// void printMedium();
// void printHard();
// bool program();
// int readValue(int);
// void makeArray(vector<string> &, const string);
// string randomWord(vector<string> &);
// string display(string);
// bool checkLetter(string, string *, vector<string> &);
// void printArray(vector<string> & letterBank, int len);
// void printGallows(int);

void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    if(argc == 2 && string(argv[1]) == "test") {
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

// void printDifficulty() {
//     cout << "Choose difficulty:\n";
//     cout << "[1] Easy\n";
//     cout << "[2] Medium\n";
//     cout << "[3] Hard\n";
//     cout << "[4] Quit the program\n";
//     cout << "Enter one of the menu options [1-4]: ";
// }

// void printEasy() {
//     cout << "Choose a category:\n";
//     cout << "[1] Winter Holiday\n";
//     cout << "[2] Pizza Toppings\n";
//     cout << "[3] Colors\n";
// }

// void printMedium() {
//     cout << "Choose a category:\n";
//     cout << "[1] Flower Names\n";
//     cout << "[2] Ice Cream Flavors\n";
//     cout << "[3] Types of Tools\n";
// }

// void printHard() {
//     cout << "Choose a category:\n";
//     cout << "[1] Dog Breeds\n";
//     cout << "[2] Ocean Animals\n";
//     cout << "[3] Olympic Sports\n";
// }

// bool program() {
//     int option; 
//     fstream fileInput;
//     vector<string> secret;
//     string inFile, randWord;
//     vector<string> letterBank;
//     int guessCount = 0;
     
//     printDifficulty();
    
//     option = readValue(4);
            
//     switch(option) {
//         case 1:
//         {
//             printEasy();
//             int category = readValue(3);

//             switch(category) {
//                 case 1:
//                 {
//                     inFile = "winterholiday.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//                 case 2:
//                 {
//                     inFile = "pizzatoppings.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//                 case 3:
//                 {
//                     inFile = "colors.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//             }
//             break;
//         }
//         case 2:
//         {
//             printMedium();
//             int category = readValue(3);

//             switch(category) {
//                 case 1:
//                 {
//                     inFile = "flowers.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//                 case 2:
//                 {
//                     inFile = "icecreamflavors.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//                 case 3:
//                 {
//                     inFile = "tools.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//             }
//             break;
//         }
//         case 3:
//         {
//             printHard();
//             int category = readValue(3);

//             switch(category) {
//                 case 1:
//                 {
//                     inFile = "dogbreeds.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//                 case 2:
//                 {
//                     inFile = "oceananimals.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//                 case 3:
//                 {
//                     inFile = "olympicsports.txt";
//                     makeArray(secret, inFile);
//                     randWord = randomWord(secret);
//                     break;
//                 }
//                 }
//             break;
//         }
//         case 4:
//         {
//             return false;
//         }
//     }

//     printGallows(0);
//     string hashes = display(randWord);
//     string * ihashes = & hashes;

//     cout << hashes << endl;

//     while (true) {
//     bool guessResult = checkLetter(randWord, ihashes, letterBank);
//     if (guessResult == false) {
//         guessCount++;
//     }
//     printGallows(guessCount);
//     cout << endl;
//     cout << hashes;
//     cout << endl;
//     printArray(letterBank, letterBank.size());
//     cout << endl;

//     if (hashes.find('-') == string::npos) {
//         cout << "You got it!" << endl;
//         break;
//     }

//     if (guessCount == 6) {
//         cout << "Sorry, you're out of tries..." << endl;
//         cout << randWord << endl;
//         break;
//     }
//     }

//     return true;
// }


// int readValue(int numOpts) {
//     int opt = 1;

//     do {
//         if (cin >> opt && opt >= 1 && opt <= numOpts) {
//             break;
//         }
//         else {
//             cin.clear();
//             cin.ignore(1000, '\n');
//             cout << "Invalid option, please enter a value between 1 and 4" << endl;
//         }
//     } while (true);

//     return opt;
// }

// void makeArray(vector<string> & secret, const string fileInput) {
//     int counter = 0;
//     string line;
//     fstream fin;

//     fin.open("../finalProject/" + fileInput);
    
//     if (fin.is_open()) {
//     while (getline(fin, line)) {
//         secret.push_back(line);
//     }
//     fin.close();
//     } else 
//     cout << "File not found" << endl;
// }

// string randomWord(vector<string> & secret) {
//     secret.size();
    
//     srand(time(0));

//     int secretNumber = 1 + (rand() % 20);

//     string word = secret[secretNumber];

//     return word;
// }

// string display(string word) {
    
//     /*size_t delimeter = word.find(" ");
//     string tmpstr1, tmpstr2;

//     if (delimeter != string::npos) {
//         tmpstr1 = word.substr(0, delimeter);
//         tmpstr2 = word.substr(delimeter + 1, word.length() - (delimeter + 1));
//     } else {
//         tmpstr1 = word;
//         tmpstr2 = "";
//     }

//     string hiddenWord1 (tmpstr1.length(), '-');
//     string hiddenWord2 (tmpstr2.length(), '-');

//     return hiddenWord1 + " " + hiddenWord2; */

//     string delimiter = " ";
//     size_t pos = word.find(delimiter);
//     vector<string> words;
//     string hiddenWord = "";

//     if (pos != string::npos)
//     {
//         int start = 0;
//         string newword = word;
//         do
//         {
//             words.push_back(newword.substr(start, pos));
//             newword = newword.substr(pos + 1, newword.length() - (pos + 1));
//             pos = newword.find(delimiter);
//             if(pos == string::npos) {
//                words.push_back(newword);
//             }
//         } while (pos != string::npos);
//     }
//     else
//     {
//         words.push_back(word);
//     }

//     for (int i = 0; i < words.size(); i++)
//     {
//         string temp(words[i].length(), '-');
//         if (i != 0)
//             hiddenWord += delimiter;
//         hiddenWord += temp;
//     }

//     return hiddenWord;

// }

// bool checkLetter(string word, string *hiddenWord, vector<string> & letterBank) {
//     string guess;
//     bool found = false;

//     cout << "Guess a letter: " << endl;
//     cin >> guess;
    
//     int pos = word.find(guess);

//     letterBank.push_back(guess + " ");

//     if (pos != string::npos) {
//         do {
//             (*hiddenWord).replace(pos, 1, guess);
//             pos = word.find(guess, pos + 1);
//         } while (pos != string::npos);
//             found = true;
//     }
    
//     return found;
// }

// void printArray(vector<string> & letterBank, int len) {
// 	cout << "Letter Bank: ";
//     for (int i = 0; i < letterBank.size(); i++) {
//         cout << letterBank[i];
//     }
// }

// void printGallows(int added) {
//     switch(added) {
//         case 0:
//         {
//             cout << "     |----------" << endl;
//             cout << "     |/    |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "===========" << endl;
//             break;
//         }

//         case 1:
//         {
//             cout << "     |----------" << endl;
//             cout << "     |/    |" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    ( )" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "===========" << endl;
//             break;
//         }

//         case 2:
//         {
//             cout << "     |----------" << endl;
//             cout << "     |/    |" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    ( )" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |     |" << endl;
//             cout << "     |     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "===========" << endl;
//             break;
//         }

//         case 3:
//         {
//             cout << "     |----------" << endl;
//             cout << "     |/    |" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    ( )" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    /|" << endl;
//             cout << "     |     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "===========" << endl;
//             break;
//         }

//         case 4:
//         {
//             cout << "     |----------" << endl;
//             cout << "     |/    |" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    ( )" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    /|\\" << endl;
//             cout << "     |     |" << endl;
//             cout << "     |" << endl;
//             cout << "     |" << endl;
//             cout << "===========" << endl;
//             break;
//         }

//         case 5:
//         {
//             cout << "     |----------" << endl;
//             cout << "     |/    |" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    ( )" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    /|\\" << endl;
//             cout << "     |     |" << endl;
//             cout << "     |    /" << endl;
//             cout << "     |" << endl;
//             cout << "===========" << endl;
//             break;
//         }

//         case 6:
//         {
//             cout << "     |----------" << endl;
//             cout << "     |/    |" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    ( )" << endl;
//             cout << "     |     -" << endl;
//             cout << "     |    /|\\" << endl;
//             cout << "     |     |" << endl;
//             cout << "     |    / \\" << endl;
//             cout << "     |" << endl;
//             cout << "===========" << endl;
//             break;
//         }
//     }
// }

