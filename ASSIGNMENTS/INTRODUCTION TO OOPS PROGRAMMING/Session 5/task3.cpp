
#include <iostream>
using namespace std;

class Flipkart {
public:
    void searchProduct(const char productName[]) {
        cout << "Searching for product: "
             << productName << endl;
    }

    void searchProduct(const char productName[],
                       const char category[]) {
        cout << "Searching for product: "
             << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main() {
    Flipkart f;

    cout << "Search 1:" << endl;
    f.searchProduct("Laptop");

    cout << endl;

    cout << "Search 2:" << endl;
    f.searchProduct("Samsung Galaxy", "Mobile");

    return 0;
}

