#include "hashtable.h"


int main() {

	// Initialize HashTable as HT
	HashTable HT;

	// Check If Empty or Not
	if (HT.isEmpty()) {
		cout << "Correct answer. Good job.";
	}
	else {
		cout << "Oh no. We need to check out the code!" << endl;
	}

	cout << endl;

	// Insert Data Pairs
	HT.insertingItem(233, "Bob");
	HT.insertingItem(124, "Jim");
	HT.insertingItem(643, "Tom");
	HT.insertingItem(409, "Sarah");
	HT.insertingItem(536, "Ash");
	HT.insertingItem(544, "Rick");
	HT.insertingItem(232, "Morty");
	HT.insertingItem(133, "Summer");
	HT.insertingItem(322, "Zim");

	// Print Table
	HT.printTable();

	cout << endl;

	// Remove Data Pairs
	HT.removeItem(233);
	HT.removeItem(100);

	cout << endl;

	// Print Table
	HT.printTable();

	cout << endl;

	// Check if empty or not 
	if (HT.isEmpty()) {
		cout << "Oh no. We need to check out the code!";
	}
	else {
		cout << "Correct answer. Good job." << endl;
	}

	system("pause");

	return 0;
}