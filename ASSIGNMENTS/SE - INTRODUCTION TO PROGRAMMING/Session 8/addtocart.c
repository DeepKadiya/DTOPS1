
#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *count, char product[]) {
    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Shopping Cart:\n");
    for (int i = 0; i < *count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main() {
    char cart[10][50] = {"Laptop", "Mouse"};
    int count = 2;

    printf("Initial Cart:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    addToCart(cart, &count, "Keyboard");

    printf("\nCart outside the function:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}

