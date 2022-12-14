/*
Name: Kyra Apodaca
Date: 10/23/2022

Guess the number game

Steps:

1- Ask the player's name and greet the player
2- Define a function called randomNumber that generates and returns a random number between 1 and 20
3- Define a function called readNumber that prompts the user to take a guess and return the guessed number
4- You must validate the guessed number to be between 1 and 20
5- Define a function called checkGuess that takes two integers compares the two numbers
    returns 0 if the numbers are equal
    returns -1 if the first number is less than second
    returns 2 otherwise
6- Write 3 test cases for checkGuess function using assert statement
7- Define a function called game that implements the logic of the guess the number game
8- Call the randomNumber function defined above to generate a random number for the user to guess for each game
9- Until the game is over, your program will ask the player to guess the number using the readNumber function defined above.
10-Use the function defined above called checkGuess to compare the user entered number with the hidden random number.
    If the player guesses the number within six tries, the game is over and the player wins.
    If the player can't guess the number within six tries, the game is over and the player loses.
    For every wrong guess, your program informs the player whether the guess is too high or too low by calling checkGuess function.
11-When the game is over, your program will inform whether the player won or lost the game and reveal the secret random number picked by the computer
    Your game will continue to run until the user wants to quit when the game is over
12-When the user quits the program/game, your program provides the following stats of the player:
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cassert>

using namespace std;

int randomNumber();
int readNumber();
int checkGuess(int, int);
int game(int);
bool playAgain();
int percentages(int, int);

int main(int argc, char *argv[]) {
    // Ask the player's name and greet the player
    string name;
    int secretNumber, guess, gameCount = 1, successCount = 0, gameResult, percent, won, lost;
    bool cont;

    cout << "Hello friend! What's your name?" << endl;

    getline(cin, name);

    cout << "Great to meet you " << name << "! Welcome to my number guessing game!" << endl;

    
    while (true) {
        cout << "The computer has generated a random number between 1 and 20...\n";
        cout << "You have six tries to guess the correct number. Good Luck!" << endl;

        secretNumber = randomNumber();

        gameResult = game(secretNumber);

        successCount = successCount + gameResult;
        cont = playAgain();

        if (!cont) {
            break;
        } 

        gameCount++;
    }

    // cout << gameCount << endl;
    // cout << successCount << endl;
    // cout << gameCount-successCount << endl;

    cout << "You played " << gameCount << " games\n";
    won = percentages(successCount, gameCount);
    cout << "You won " << won << "% of the games you played\n";
    lost = percentages((gameCount-successCount), gameCount);
    cout << "You lost " << lost << "% of the games you played";
    

    return 0;
}

// Define a function called randomNumber that generates and returns a random number between 1 and 20

int randomNumber() {
    srand(time(0));

    int secretNumber = 1 + (rand() % 20);

    return secretNumber;
}

// Define a function called readNumber that prompts the user to take a guess and return the guessed number

int readNumber() {
    int guess;

    cout << "Guess the number!" << endl;

    cin >> guess;

    // You must validate the guessed number to be between 1 and 20

    if (guess <= 20) {
        cout << "Your guess is: " << guess << endl;
    } else {

        cout << "Error: please ensure you enter a number between 1 and 20" << endl;
    }

    return guess;
}

// Define a function called checkGuess that takes two integers compares the two numbers

int checkGuess(int g1, int s1) {
    // cout << "g: " << g1 << endl;
    // cout << "sn: " << s1 << endl;

    if (g1 == s1)
    {

        cout << "Way to go! You won!" << endl;

        cout << "The secret number is: " << s1 << endl;

        return 1;
    }
    else if (g1 < s1)
    {

        cout << "Your number is too low..." << endl;

    }
    else if (g1 > s1)
    {

        cout << "Your number is too high..." << endl;
    }
    else
    {

        cout << "Make sure your number is in the corret range" << endl;
    }

    return 0;
}

// Write 3 test cases for checkGuess function using assert statement

void test() {
    assert(checkGuess(3, 2));
    assert(checkGuess(14, 9));
    assert(checkGuess(19, 6));
}

// Define a function called game that implements the logic of the guess the number game

int game(int secretIn) {
    int guess, result;
    int attemptsRemaining = 6;

    while (true) {
        guess = readNumber();
        // cout << "Your guess is: " << guess << endl;

        result = checkGuess(guess, secretIn); 

        if (result == 1) {
            return 1;
        }

        attemptsRemaining--;

        if (attemptsRemaining == 0) {
            cout << "You ran out of tries! Thats too bad.. the secret number is: " << secretIn << endl;

            break;
        }
    }

    return 0;
}

bool playAgain() {
    string answer;

    while (true) {
    cout << "Would you like to play again? (yes/no)" << endl;
    cin >> answer;

    if (answer == "yes") {
        return true;
    } else if (answer == "no") {
        return false;
    }
    }

}

int percentages(int numerator, int denomenator) {
    int percent;

    cout << numerator << endl;
    cout << denomenator << endl;

    percent = (numerator/denomenator) *100;
  

    // cout << percent << endl;

    return percent;
}