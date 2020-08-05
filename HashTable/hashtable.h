#pragma once

#include <iostream>
#include <list>
#include <cstring>

using namespace std;

// Hash Table Class
class HashTable {
// List Pairs (int, String)
	private:
		static const int hashGroups = 10;
		list<pair<int, string >> table[hashGroups];

// Class Functions
	public:
		bool isEmpty() const;
		int hashFuction(int key);
		void insertingItem(int key, string value);
		void removeItem(int key);
		string searchTable(int key);
		void printTable();

};

// Empty or Not 
bool HashTable::isEmpty() const {
	
	int sum{};
	for (int i{}; i < hashGroups; i++) {
		sum += table[i].size();
	}
	if (!sum) {
		return true;
	}
	return false;
}

// Modulus of the key
int HashTable::hashFuction(int key) {
	return key % hashGroups;
}

// Insert Data Pair or Replace 
void HashTable::insertingItem(int key, string value) {
	int hashValue = hashFuction(key);
	auto& cell = table[hashValue];
	auto bItr = begin(cell);
	bool keyExists = false;

	for (; bItr != end(cell); bItr++) {
		if (bItr->first == key) {
			keyExists = true;
			bItr->second = value;
			cout << "[WARNING] Key exists. Value Replaced." << endl;
			break;
		}
	}

	if (!keyExists) {
		cell.emplace_back(key, value);
	}
	return;
}

// Remove Data Pair or Display no Pair
void HashTable::removeItem(int key) {
	int hashValue = hashFuction(key);
	auto& cell = table[hashValue];
	auto bItr = begin(cell);
	bool keyExists = false;

	for (; bItr != end(cell); bItr++) {
		if (bItr->first == key) {
			keyExists = true;
			bItr = cell.erase(bItr);
			cout << "[WARNING] Key exists. Value Replaced." << endl;
			break;
		}
	}

	if (!keyExists) {
		cout << "[WARNING] Key not found. pair not removed." << endl;
	}
	return;
}

// Print Table Data Pairs
void HashTable::printTable() {
	for (int i{}; i < hashGroups; i++) {
		if (table[i].size() == 0) continue;

		auto bItr = table[i].begin();
		for (; bItr != table[i].end(); bItr++) {
			cout << "[INFO} KEY: " << bItr->first << " Value: " << bItr->second << endl;
		}
	}
}











