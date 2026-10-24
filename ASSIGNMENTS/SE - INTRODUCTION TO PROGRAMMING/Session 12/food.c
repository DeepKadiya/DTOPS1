#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
        {"Veg Burger", 120.0, 4.2},
        {"Margherita Pizza", 250.0, 4.5},
        {"Paneer Biryani", 180.0, 4.3}
    };

    for (int i = 0; i < 3; i++) {
        printf("\nFood Item %d\n", i + 1);
        printf("Name: %s\n", menu[i].itemName);
        printf("Price: Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f/5\n", menu[i].rating);
    }

    return 0;
}
