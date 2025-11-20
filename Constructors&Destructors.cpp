#include <iostream>
#include <string>
using namespace std;

class Product {
private:
	int id;
	string name;
	double price;

public:
	// Constructor
	Product(int prodId, string prodName, double prodPrice) {
		id = prodId;
		name = prodName;
		price = prodPrice;

		cout << "Product have been created!" << endl;
	}

	// Destructor
	~Product() {
		cout << "Destructor called: Product got deleted!" << endl;
	}

	// Method to print product in details
	void printDetails() const {
		cout << "Product ID: " << id << endl;
		cout << "Product Name: " << name << endl;
		cout << "Product Price: $" << price << endl;
	}
};

int main() {
	// Create a Product object
	Product prod1(101, "Laptop", 999.99);

	// Print product details
	prod1.printDetails();
	return 0;
}
