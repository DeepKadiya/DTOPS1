#include <stdio.h>

int main() {
    float percentage;

    printf("Enter student's percentage: ");
    if (scanf("%f", &percentage) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        return 0;
    }

    if (percentage < 0 || percentage > 100) {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 0;
    }

    if (percentage >= 90) {
        printf("Grade A - Excellent work! Keep it up.\n");
    }
    else if (percentage >= 75) {
        printf("Grade B - Good work! Keep pushing.\n");
    }
    else if (percentage >= 60) {
        printf("Grade C - Good effort! Keep improving.\n");
    }
    else if (percentage >= 45) {
        printf("Grade D - Keep practicing! You can do better.\n");
    }
    else {
        printf("Grade F - Don't give up! Learn and try again.\n");
    }

    return 0;
}
