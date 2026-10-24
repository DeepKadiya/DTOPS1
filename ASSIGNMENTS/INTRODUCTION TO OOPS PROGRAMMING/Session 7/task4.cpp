#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("wishlist.txt");
    string name;
    float price;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter product " << i << " name: ";
        getline(cin, name);

        cout << "Enter product " << i << " price: ";
        cin >> price;
        cin.ignore();

        outFile << name << endl;
        outFile << price << endl;
    }

    outFile.close();

    ifstream inFile("wishlist.txt");

    cout << "\n--- My Wishlist ---" << endl;

    for (int i = 1; i <= 3; i++) {
        getline(inFile, name);
        inFile >> price;
        inFile.ignore();

        cout << "Product: " << name
             << " | Price: Rs. " << price << endl;
    }

    inFile.close();

    return 0;
}
