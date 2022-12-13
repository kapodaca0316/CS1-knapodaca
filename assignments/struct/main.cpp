/*
Name: Kyra Apodaca
Date: 12/12/2022

1.Prompt the user for input file name to read the data from.
2.Read an arbitrary number of student records into an array/vector.
3.Prompt the user for the output file to write the output report to.

4.Write function(s) to find students’ average test scores and the corresponding letter grade

A (90% and above) 
B (80% - 89%) 
C (70% - 79%) 
D (60% - 69%) 
F (59% and less) 

5.Write the values to the output text file using the tabular format as shown in the provided sample file called cs112.out.
6.Write a function and use it to sort the array of students' records in descending order
*/

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {



}

void makeArray(vector<string> & grades, const string fileInput) {
    int counter = 0;
    string line;
    fstream fin;

    fin.open("../assignments/struct/" + fileInput);
    
    if (fin.is_open()) {
    while (getline(fin, line)) {
        grades.push_back(line);
    }
    fin.close();
    } else 
    cout << "File not found" << endl;
}
