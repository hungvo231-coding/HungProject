#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Item {
	string name;
	int id;
};

//	ID search with binary search
int binarySearch(Item* arr, int size, int targetID) {
	int left = 0;
	int right = size - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (arr[mid].id == targetID)
			return mid; // Target founded
		else if (arr[mid].id < targetID)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1; // Target not founded
}

int main() {
	const int SIZE = 100;

	Item* items = new Item[SIZE];

	for (int i = 0; i < SIZE; i++) {
		items[i].id = i + 1;
		items[i].name = "Item_" + to_string(1000 + i);
	}

	// Sort items by name
	sort(items, items + SIZE, [](const Item& a, const Item& b) {
		return a.name < b.name;
		});

	// Ask user for an ID to search
	int targetID;
	cout << "Enter an ID to search for (1-" << SIZE << "): ";
	cin >> targetID;

	// Temporarily copy and sort by ID for binary search
	Item* sortedByID = new Item[SIZE];
	for (int i = 0; i < SIZE; i++)
		sortedByID[i] = items[i];

	sort(sortedByID, sortedByID + SIZE, [](const Item& a, const Item& b) {
		return a.id < b.id;
		});

	// Perform binary search
	int index = binarySearch(sortedByID, SIZE, targetID);

	//	Display result
	if (index != -1) {
		cout << "Item found: ID = " << sortedByID[index].id << ", Name = " << sortedByID[index].name << endl;
	}
	else {
		cout << "Item with ID " << targetID << " not found." << endl;
	}

	// Free allocated memory
	delete[] items;
	delete[] sortedByID;

	return 0;
}

