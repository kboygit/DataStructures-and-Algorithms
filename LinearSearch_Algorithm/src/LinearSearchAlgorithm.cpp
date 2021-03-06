//============================================================================
// Name        : LinearSearchAlgorithm.cpp
// Author      : Kirby James
// Version     :
// Copyright   : N/A
// Description : Kirby's Algorithm Implementations ( Linear Search Algorithm )
//============================================================================

#include <iostream>
using namespace std;

int LinearSearch(int numbers[], int numberSize, int key) {
	int i = 0;
	for(i = 0; i < numberSize; i++){
		if(numbers[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	int numbers[] = { 2, 4, 7, 10, 11, 32, 45, 87 };
	const int NUMBERS_SIZE = 8;
	int i = 0;
	int key = 0;
	int keyIndex = 0;

	cout << "NUMBERS: ";
	for (i = 0; i < NUMBERS_SIZE; i++) {
		cout << numbers[i] << ' ';
	}
	cout << endl;

	cout << "Enter a value: ";
		cin >> key;

	keyIndex = LinearSearch(numbers, NUMBERS_SIZE, key);

	if (keyIndex == -1) {
		cout << key << " was not found." << endl;
	}
	else {
		cout << "Found " << key << " at index " << keyIndex << "." << endl;
	}

	return 0;
}
