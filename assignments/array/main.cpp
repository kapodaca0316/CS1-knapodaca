/*
Name: Kyra Apodaca
Date: 11/17/2022

Steps:
1- make a function that takes in the integers for the array
2- make a function that sorts the array
3- make a function that prints the array
4- make a function that sums each persons "winnings"

When doing the arrays, one needs to be declared for Alice and one for Bob

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>

using namespace std;

using large_int = long long int;

void readData(int *, int);
void bubbleSort(int *, int);
void whosWho(int *, int *, int *, int);
large_int findSum(int *, int);
void tests();
void printArray(int nums[], int size);

int main(int argc, char *argv[]) {
    size_t array, sizeA, sizeB;
	
    //cout << "array size:" << endl;
    cin >> array;
    //cout << "array size:" << array << endl;
	int *nums = new int[array];

    readData(nums, array);

    sizeB = array / 2;

    sizeA = array - sizeB;

    int *numsA = new int [sizeA];
    int *numsB = new int [sizeB];

    bubbleSort(nums, array);
    //printArray(nums, array);

    whosWho(nums, numsA, numsB, array);

    //cout << endl;
    
    cout << "Alice:";
    printArray(numsA, sizeA);
     cout << endl;

    cout << "Bob:";
    printArray(numsB, sizeB);
     cout << endl;
     
    cout << findSum(numsA, sizeA) << endl;
    cout << findSum(numsB, sizeB) << endl;

    //cout << "array size" << array << endl;
    //cout << "size of numsA" << sizeA << endl;
    //cout << "size of numsB" << sizeB << endl;

    

    return 0;
}

void readData(int nums[], int array) {
	for (int i = 0; i < array; i++)
	{
		cin >> nums[i];
	}
}

void bubbleSort (int nums[], int size) {
    int i, j;
	bool sorted = false;
	for (i = 0; i < size; i++) {
		sorted = true;
		for (j = 0; j < size - i - 1; j++) {
			if (nums[j] > nums[j + 1]) {
				swap(nums[j], nums[j + 1]);
				sorted = false;
			}
		}
		if (sorted)
			break;
	}
} //from lab 8- array

void whosWho(int nums[], int numsA[], int numsB[], int size) {
    bool isA = true;
    int j = 0;
    //cout << size;
    //printArray(nums, size);
    for (int i = size - 1; i >= 0; i--) {
        cout << nums[i] << endl;
        if (isA) {
            numsA[j] = nums[i];
            isA = false;
            cout << "A: " << numsA[j] << endl;
        } else {
            numsB[j] = nums[i];
            isA = true;
            cout << "B: " << numsB[j] << endl;
        }
        j++;
    }
}

large_int findSum(int nums[], int size) {
    large_int sum = 0;
    for (int i = 0; i < size; i++) {
		sum = sum + nums[i];
	} 

	return sum;
}

void tests() {

}

void printArray(int nums[], int size) {
	cout << "[ ";
	for (int i = 0; i < size; i++)
		cout << nums[i] << " ";
	cout << "]" << endl;
}