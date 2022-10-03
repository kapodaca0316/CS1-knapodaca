/*
Name: Kyra Apodaca
Date: 9/29/22

pointers: store 
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//void printName(string&);

int main(int argc, char *argv[]) {
    int num1;
    int num2, num3, num4;
    int *something;
    
    num1 = 42;
    num2 = 15;
    num3 = 9000;
    num4 = -5;

    cout << "&num1: " << &num1 << endl;
    cout << "&num2: " << &num2 << endl;
    cout << "&num3: " << &num3 << endl;
    cout << "&num4: " << &num4 << endl;

    something = &num1;
    
    cout << *something << endl;
    something++;
    cout << *something << endl;
     cout << *something << endl;
    something++;
     cout << *something << endl;
    something++;
    cout << *something << endl;
    something--;
    cout << *something << endl;
     cout << *something << endl;
    something--;
     cout << *something << endl;
    something--;
    cout << *something << endl;
    // cout << &num1 << endl;
    // cout << &num2 << endl;
    // cout << &num3 << endl;
    // cout << &num4 << endl;
    // cout << *something << endl;

    // something = &num2;

    // cout << *something << endl;
    
    
    // int side1;
    // int side2;
    // int *ptr;

    // side1 = 42;
    // side2 = 9000;
    
    // ptr = &side1;
    
    // cout << "side1: " << side1 << endl;
    // cout << "ptr: " << *ptr << endl;

    // side1 = 12;

    // cout << setw(20) << setfill(' ') << "" << endl;
    // cout << "side1: " << side1 << endl;
    // cout << "ptr: " << *ptr << endl;

    // ptr = &side2;
    // *ptr = 100;

    // cout << setw(20) << setfill(' ') << "" << endl;
    // cout << "side1: " << side1 << endl;
    // cout << "ptr: " << *ptr << endl;


    // char middleInitial = 'K';
    // char *ptr;
    
    // ptr = &middleInitial;

    // middleInitial = 'A';
    // *ptr = 'N';
    
    // cout << middleInitial << endl;
    // cout << *ptr << endl;    
    
    // string myName;
    // string *myNamePointer;
   
    // myName = "Kyra";
    // myNamePointer = &myName;

    // cout << myName << endl;
    // cout << myNamePointer << endl;
   
   
    // int numLines;
    // int notPointer;
    // int *ptr;
    
    // numLines = 42;
    // notPointer = numLines;
    // ptr = &numLines;

    // cout << &numLines << endl;
    // cout << &notPointer << endl;
    // cout << ptr << endl;
    // cout << &ptr << endl;
    // cout << *ptr << endl;
    
    
    // string myName;
    // long middle;
    // int numLines;
    // int side1;

    // cout << &myName << endl;
    // cout << &middle << endl;
    // cout << &numLines << endl;
    // //adding the & reads out the memory address
    // cout << &side1 << endl;
    // //addresses will always be exactly 4 bytes apart 

    // // printName(myName);

    return 0;
}

// void printName(string &myName){
//     cout << &myName << endl;
// }
//pointers practice 