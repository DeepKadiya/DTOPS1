#include <stdio.h>

int main()
 {
    
    const float GST_RATE = 0.18f; 

    
    float basePrice = 450.00f;


    float gstAmount = basePrice * GST_RATE;
    float finalPrice = basePrice + gstAmount;

    printf("--- Zomato Order Bill Summary ---\n");
    printf("Base Price:   ?%.2f\n", basePrice);
    printf("GST (18%%):    ?%.2f\n", gstAmount);
    printf("---------------------------------\n");
    printf("Final Price:  ?%.2f\n", finalPrice);

    

    return 0;
}

