#include <stdio.h>
#include <stdbool.h> 


bool isEligibleForOffer(int age, float orderValue) {
    
    if (age >= 18 && orderValue > 500.0f) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    int userAge = 22;
    float billAmount = 540.50f;

    if (isEligibleForOffer(userAge, billAmount)) {
        printf("Offer Applied Successfully!\n");
    } else {
        printf("Not eligible for this offer.\n");
    }

    return 0;
}

