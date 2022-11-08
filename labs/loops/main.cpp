/*
    Loops Lab
    Updated By: Kyra Apodaca
    FIXME1
    CSCI 111
    Date: 10/20/2022
    FIXME2
    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void printTriangle(int height) {
    //Function takes height as an argument to print the triangle
    //of that height with *
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}


void printFlippedTriangle(int height) {
    /* 
    Implement the function that takes height as an argument
    and prints a triangle with * of given height.
    Triangle of height 5, e.g., should look like the following.
    * * * * *
    * * * *
    * * *
    * *
    *
    
    */
    // FIXME3 ... #FIXED#
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = 1; col<=height-row+1; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
    
}


/*  
FIXME4 #FIXED#
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.
*  *  *  *  *  
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*/
void printSquare(int height) {
    int row = 1;
    while (row <= height) {
        for(int col = 1; col<=height; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
    // cout << "finished square" << endl;
}

// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    // FIXME5 add a loop to make the program to continue to run until the user wants to quit #FIXED#
    // FIXME6 call clearScreen function to clear the screen for each round of the loop #FIXED#
    int height;
    string play;
    
    cout << "Program prints geometric shapes of given height with *\n";
    
    while (true) {
    cout << "Please enter the height of the shape: ";
    cin >> height;
    // call printTriangle function passing user entered height
    cout << "Triangle: \n";
    printTriangle(height);

    // FIXME7 #FIXED#
    // Call printFlippedTriangle passing proper argument
    // Manually test the function
    cout << "Inverted Triangle: \n";
    printFlippedTriangle(height);

    // FIXME6 #FIXED#
    // Call the function defined in FIXME4 passing proper argument
    // Manually test the function
    cout << "Square: \n";
    printSquare(height);

    // FIXME9 #FIXED#
    // prompt user to enter y/Y to continue anything else to quit

    // FIXME10 #FIXED#
    // Use conditional statements to break the loop or continue the loop
    
    cout << "Would you like to try again? (y/Y to run again)" << endl;
    cin >> play;

    
    if (play == "y" || play == "Y") {
        clearScreen();
    } else {
        break;
    }
    }

    return 0;
}