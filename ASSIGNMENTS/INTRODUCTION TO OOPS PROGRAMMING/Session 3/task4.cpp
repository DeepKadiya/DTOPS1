
#include <iostream>
using namespace std;

class Ticket {
public:
    Ticket() {
        cout << "Ticket booked successfully!" << endl;
    }

    ~Ticket() {
        cout << "Saving your ticket..." << endl;
    }
};

int main() {
    Ticket *t = new Ticket();

    cout << "Ticket booking is complete." << endl;

    delete t;

    return 0;
}

