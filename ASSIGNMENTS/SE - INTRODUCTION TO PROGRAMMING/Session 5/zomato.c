#include <stdio.h>

int main() {
    char mealTime;

    
    printf(" Welcome to Zomato Food Suggestion Bot\n");
    printf("Select your current meal time:\n");
    printf("B : Breakfast\n");
    printf("L : Lunch\n");
    printf("D : Dinner\n");
    printf("S : Snack\n");
    printf("---------------------------------------------\n");
    printf("Enter your choice: ");
    
    
    scanf("%c", &mealTime);

    
    switch (mealTime) {
        
        case 'B':
        case 'b':
            printf("\nZomato Suggests: How about a hot plate of Idli Sambhar or Aloo Paratha? ??\n");
            break;
            
        case 'L':
        case 'l':
            printf("\nZomato Suggests: Try a premium North Indian Veg/Non-Veg Thali! ??\n");
            break;
            
        case 'D':
        case 'd':
            printf("\nZomato Suggests: Light and delicious Paneer Butter Masala with Butter Naan! ??\n");
            break;
            
        case 'S':
        case 's':
            printf("\nZomato Suggests: Perfect time for crispy Samosas or a spicy Vada Pav with Chai! ?\n");
            break;
            
       
        default:
            printf("\nZomato Suggests: Try some fruits! ??\n");
            break;
    }

    return 0;
}

