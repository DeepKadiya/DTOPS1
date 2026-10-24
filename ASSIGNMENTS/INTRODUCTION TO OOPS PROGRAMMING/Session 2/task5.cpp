
#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    char restaurantName[100];
    int isDelivered;

    FoodOrder(int id, const char name[], int delivered) {
        orderId = id;
        int i = 0;

        while (name[i] != '\0' && i < 99) {
            restaurantName[i] = name[i];
            i++;
        }
        restaurantName[i] = '\0';

        isDelivered = delivered;
    }

    void markDelivered() {
        isDelivered = 1;
        cout << "Order has been delivered!" << endl;
    }

    void display() {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant Name: " << restaurantName << endl;
        cout << "Is Delivered: ";

        if (isDelivered == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
};

int main() {
    FoodOrder order(101, "Pizza House", 0);

    order.markDelivered();

    cout << "\nOrder Details:\n";
    order.display();

    return 0;
}

