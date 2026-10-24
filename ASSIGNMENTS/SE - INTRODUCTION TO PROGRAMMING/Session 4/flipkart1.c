#include <stdio.h>
#include <stdbool.h> 
float calculateFlipkartPrice(float productPrice, float discountPercentage, bool isMember) {
    
    float standardDiscount = productPrice * (discountPercentage / 100.0f);
    float priceAfterStandardDiscount = productPrice - standardDiscount;
    
    float finalPrice = priceAfterStandardDiscount;

   
    if (isMember == true && priceAfterStandardDiscount > 0.0f) {
        float memberDiscount = priceAfterStandardDiscount * 0.05f; 
        finalPrice = priceAfterStandardDiscount - memberDiscount;
        printf("Flipkart Plus Member detected! Applied an extra 5%% off.\n");
    }

    return finalPrice;
}

int main() {
    
    printf(" Test Case 1: Regular Customer\n");
    float price1 = calculateFlipkartPrice(5000.00f, 20.0f, false); 
    printf("Final Price: ?%.2f\n", price1); 

    
    printf("\nTest Case 2: Flipkart Plus Member \n");
    float price2 = calculateFlipkartPrice(5000.00f, 20.0f, true); 
    printf("Final Price: ?%.2f\n", price2);

    return 0;
}

