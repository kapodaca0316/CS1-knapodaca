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

int main(int argc, char *argv[]) {
    size_t array, sizeA, sizeB;
	
    tests();

    cin >> array;

	int *nums = new int[array];

    readData(nums, array);

    sizeB = array / 2;

    sizeA = array - sizeB;

    int *numsA = new int [sizeA];
    int *numsB = new int [sizeB];

    bubbleSort(nums, array);

    whosWho(nums, numsA, numsB, array);
     
    cout << findSum(numsA, sizeA) << endl;
    cout << findSum(numsB, sizeB) << endl;

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
    int k = 0;

    for (int i = size - 1; i >= 0; i--) {
        if (isA) {
            numsA[j] = nums[i];
            isA = false;
            j++;
        } else {
            numsB[k] = nums[i];
            isA = true;
            k++;
        }
        
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
    int test[5] = {9,7,8,10,13};
    int test2[3] = {9,11,5};
    int test3[7] = {11,7,12,19,2,6,7};
    int resultA[3] = {13,9,7};
    int resultB[2] = {10,8};
    
    int *numsA = new int [3];
    int *numsB = new int [2];

    assert(findSum(test, 5) == 47);
    assert(findSum(test2, 3) == 25);
    assert(findSum(test3, 7) == 64);
    
    whosWho(test, numsA, numsB, 5);
    assert(numsA[0] == resultA[0]);
    assert(numsB[0] == resultB[0]);
}
