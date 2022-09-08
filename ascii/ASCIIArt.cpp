/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: <Kyra Apodaca> #FIXME1
    Date: 9/01/2022 #FIXME2
    
    This program produces an ASCII art on the console.
    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream> //library for input and output
#include <string> //library for string data
 
using namespace std; //resolve cout, cin, and endl names

//main entry point of the program
int main()
{
    //FIXME3: declare a variable to store name
    string yourName; 
    cout << "Please enter your name: "; //FIXME4: prompt user to enter their name and store the value in variable 
    getline(cin, yourName);

    cout << "Nice meeting you, " << yourName << "!" << endl; //FIXME5: greet the name using the variable as the following output
    //must output: Nice meeting you, <name>! #fixed#

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";
    
    string line1 = "  |\\_/|   **********************   (\\_/)\n";
    cout << line1;

    string line2 = " / @ @ \\    *    ASCII Lab   *    (='.'=)\n";
    cout << line2; //FIXME6: use variable to print the second line line of the graphic #fixed#

    string line3 = "( > 0 < ) *  By: Kyra Apodaca  * ('')_('')\n"; 
    cout << line3;
    //FIXME7: print the third line of the graphics #fixed#
    
    string line4 = "  >>X<<     *     CSCI 111    *\n";
    cout << line4; 
    //FIXME8: use variable to print the fourth line #fixed#
   
    string line5 = "  / O \\   **********************\n";
    cout << line5;
    //FIXME9: use variable to print the fifth line #fixed#
    //Note: You can add more lines or print more ASCII arts of your choice if you'd like...

    cout << "Good bye... hit enter to exit the program: " << '\n';
    cin.ignore();
    //FIXME10: make the console wait for user input #fixed#

    return 0; //exit program by returning 0 status to the system
}