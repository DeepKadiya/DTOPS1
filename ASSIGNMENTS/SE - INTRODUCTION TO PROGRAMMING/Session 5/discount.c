
#include <stdio.h>

int main() {
    float amount, discount, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 2000) {
        discount = amount * 0.20;
    } else {
        if (amount > 1000) {
            discount = amount * 0.10;
        } else {
            discount = 0;
        }
    }

    finalAmount = amount - discount;

    printf("Total Cart Amount: Rs. %.2f\n", amount);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final Amount to Pay: Rs. %.2f\n", finalAmount);

    return 0;
}

