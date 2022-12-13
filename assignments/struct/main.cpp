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

void makeArray(vector<string> &, const string);
string student(vector<string> &);

int main(int argc, char* argv[]) {
    vector<string> students;
    string fin;

    cout << "Enter a file name: " << endl;

    cin >> fin;
    //cout << fin << endl;

    makeArray(students, fin);
    student(students);

return 0;

}

void makeArray(vector<string> & students, const string fileInput) {
    int counter = 0;
    string line;
    fstream fin;

    fin.open(fileInput);
    
    if (fin.is_open()) {
    while (getline(fin, line)) {
        students.push_back(line);
    }
    fin.close();
    } else 
    cout << "File not found" << endl;
}


string student(vector<string> & students) {
    vector<vector<string>> names;
    vector<vector<int>> grades;

    for (int i = 0; i < students.size(); i ++) {
        size_t delimeter = students[i].find(" ");
        string firstName, lastName, strtests;

    if (delimeter != string::npos) {
        firstName = students[i].substr(0, delimeter);
        size_t word2 = students[i].find(" ", delimeter + 1);
        lastName = students[i].substr(delimeter + 1, (word2 - delimeter));
        names.push_back({firstName, lastName});
        strtests = students[i].substr(word2 + 1, students[i].length());
    }

    string delimiter = " ";
    size_t pos = strtests.find(delimiter);
    vector<int> tests;
    int start = 0;
    string newTest = strtests;

    do
        {
            tests.push_back(newTest.substr(start, pos));
            newTest = newTest.substr(pos + 1, newTest.length() - (pos + 1));
            pos = newTest.find(delimiter);
            if(pos == string::npos) {
               tests.push_back(newTest);
            }
        } while (pos != string::npos);

    cout << firstName << endl;
    cout << lastName << endl;
    cout << tests << endl;
    }

    

}
