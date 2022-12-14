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
struct student;

int main(int argc, char* argv[]) {
    vector<string> students;
    vector<vector<string>> names;
    vector<vector<int>> grades;
    vector<student> studentGrades;
    string fin;

    cout << "Enter a file name: " << endl;

    cin >> fin;

    makeArray(students, fin);
    //student(students);

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

struct student {
    string lastName;
    string firstName;
    vector<int> tests;
};

vector<student> getStudents(vector<string> & students) {

    for (int i = 0; i < students.size(); i ++) {
        size_t pos1 = students[i].find(" ");
        string firstName, lastName, strtests;

    if (pos1 != string::npos) {
        firstName = students[i].substr(0, pos1);
        size_t word2 = students[i].find(" ", pos1 + 1);
        lastName = students[i].substr(pos1 + 1, (word2 - pos1));
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
            tests.push_back(stoi(newTest.substr(start, pos)));
            newTest = newTest.substr(pos + 1, newTest.length() - (pos + 1));
            pos = newTest.find(delimiter);
            if(pos == string::npos) {
               tests.push_back(stoi(newTest));
            }
        } while (pos != string::npos);

    grades.push_back(tests);    

}
}

void findAvg(vector<int> scores) {
    int overallScore = 0;

    for (int i = 0; i > scores.size(); i++){
        overallScore += scores[i];
    }
    float avg = (overallScore)/scores.size();
    
}

char letterGrade(float avg) {
    if (avg >= 90) {
       return 'A';
    } else if (avg < 90 && avg >= 80) {
        return 'B';
    } else if (avg < 80 && avg >= 70) {
       return 'C';
    } else if (avg < 70 && avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}