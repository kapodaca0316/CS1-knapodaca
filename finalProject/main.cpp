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
 
#include "hangman.h"


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
