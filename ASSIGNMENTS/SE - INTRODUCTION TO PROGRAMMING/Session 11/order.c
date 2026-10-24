#include <stdio.h>

int main() {
    int orders[5] = {250, 400, 150, 320, 500};
    int *ptr = orders;

    for (int i = 0; i < 5; i++) {
        printf("Order amount: %d, Address: %p\n",
               *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
