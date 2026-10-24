
#include <iostream>
using namespace std;

class Product {
public:
    char productName[100];
    float price;
    float rating;

    Product(const char name[], float p, float r) {
        int i = 0;

        while (name[i] != '\0' && i < 99) {
            productName[i] = name[i];
            i++;
        }
        productName[i] = '\0';

        price = p;
        rating = r;
    }

    void displayInfo() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};

int main() {
    Product p("Wireless Headphones", 1499.00, 4.5);

    p.displayInfo();

    return 0;
}

