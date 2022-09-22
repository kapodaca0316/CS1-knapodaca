#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main(int agrc, char *argv[]) {
    int num1, num2;

    num1 = 42;
    num2 = 43;

    if (!(num1 > num2 && num1 > 0)) {
        cout << "num1 and num2 are positive and/or num1 is greater than num2" << endl;

    }
return 0;
}

//if (side1 == something && side2 == something && side3 == something){
//  cout << this is a triangle << endl;
//}
// if (side1 == something){
//  if (side2 == something){
//      if (side3 == something) {
//  