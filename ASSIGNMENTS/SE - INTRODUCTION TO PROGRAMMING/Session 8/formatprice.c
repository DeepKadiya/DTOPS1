
#include <stdio.h>

void formatPrice(int price) {
    printf("?%d\n", price);
}

int main() {
    printf("===== Product Prices =====\n");

    printf("1. Headphones: ");
    formatPrice(1599);

    printf("2. Keyboard: ");
    formatPrice(2499);

    printf("3. Mouse: ");
    formatPrice(799);

    return 0;
}

