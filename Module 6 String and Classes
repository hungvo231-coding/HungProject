#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    // Writes item data to file in format: name,quantity
    void saveToFile(const string& filename) {
        ofstream outFile(filename);

        if (!outFile) {
            cout << "Error opening file for writing.\n";
            return;
        }

        outFile << name << "," << quantity << endl;
        outFile.close();
    }

    // Reads file content and displays it
    void loadFromFile(const string& filename) {
        ifstream inFile(filename);

        if (!inFile) {
            cout << "Error opening file for reading.\n";
            return;
        }

        string line;
        while (getline(inFile, line)) {
            cout << "File content: " << line << endl;
        }

        inFile.close();
    }
};

int main() {
    Item myItem;

    // Assigning values
    myItem.name = "Wrench";
    myItem.quantity = 5;

    // Save item to file
    myItem.saveToFile("items.txt");

    // Load and display file contents
    myItem.loadFromFile("items.txt");

    return 0;
}
