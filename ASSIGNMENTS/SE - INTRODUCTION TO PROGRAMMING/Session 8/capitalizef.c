
#include <stdio.h>

void capitalizeFirst(char str[]) {
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 32;
    }
}

int main() {
    char product[] = "laptop";
    char username[] = "virat";

    capitalizeFirst(product);
    capitalizeFirst(username);

    printf("Product Name: %s\n", product);
    printf("Username: %s\n", username);

    return 0;
}

