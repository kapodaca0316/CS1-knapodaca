/*
Name: Kyra Apodaca
Date: 10/26/2022

Vectors
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    vector<int> myNums, myNums2;
    int myNums2[3];
    string myName = "Kyra";

    myNums.push_back(42);
    myNums.push_back(15);
    myNums.push_back(7);

    myNums2[0] = 42;
    myNums2[1] = 15;
    myNums2[2] = 7;

    cout << myNums.at(3) << endl;
    cout << myName.at(3) << endl;
    cout << myNums[2] << endl;
    cout << myNums.size() << endl;
    for (size_t i = 0; i < myNums.size(); i++) {
        cout << myNums.at(i) << endl;
    }
    for (auto item: myNums) {
        cout << item << endl;
    }
    for (auto ch: myName) {
        cout << ch << endl;
    }
    for (auto it = myName.begin(); it != myName.end(); it++) {
        cout << *it << endl;
    }
      for (string::iterator it = myName.begin(); it != myName.end(); it++) {
        cout << *it << endl;
    }
    for (auto it = myNums.begin(); it != myNums.end(); it++) {
        cout << *it << endl;
    }

    // 42 15 7
    cout << myNums.front() << endl;
    myNums.erase(myNums.begin());

    // 15 7
    cout << myNums.front() << endl;
    myNums.erase(myNums.begin());

    // 7
    cout << myNums.front() << endl;
    myNums.erase(myNums.begin());

    //nothing
    cout << myNums.front() << endl;

    for (auto item: myNums) {
        cout << item << " ";
    }
    cout << endl;

    cout << myNums.front() << endl;

    for (auto item: myNums) {
        cout << item << " ";
    }
    cout << endl;

    myNums.erase(myNums.begin()+2);
    for (auto item : myNums) {
        cout << item << " ";
    }
    cout << endl;

    myNums.erase(myNums.end()-3);
    for (auto item : myNums) {
        cout << item << " ";
    }
    cout << endl;

    cout << myNums.empty() << endl;
    cout << boolalpha << myNums.empty() << endl;

    cout << myNums.max_size() << endl;

    cout << myNums.size() << endl;
    myNums.clear();
    cout << myNums.size() << endl;

    cout << myNums.size() << endl;
    cout << myNums2.size() << endl;
    myNums2 = myNums;

    cout << myNums2.size() << endl;
    myNums2.erase(myNums2.begin());
    cout << "myNums2.size(): " << myNums2.size() << endl;
    cout << "myNums.size(): " << myNums.size() << endl;

    return 0;
}