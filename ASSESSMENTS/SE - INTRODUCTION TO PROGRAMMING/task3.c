#include <stdio.h>

int main() {
    float hours[7], total = 0, average;
    int i, highestDay = 0;

    for (i = 0; i < 7; i++) {
        do {
            printf("Enter study hours for Day %d: ", i + 1);

            if (scanf("%f", &hours[i]) != 1) {
                printf("Invalid input! Enter a number.\n");

                while (getchar() != '\n');
                hours[i] = -1;
            }
            else if (hours[i] < 0 || hours[i] > 24) {
                printf("Invalid hours! Enter a value between 0 and 24.\n");
            }

        } while (hours[i] < 0 || hours[i] > 24);

        total += hours[i];

        if (hours[i] > hours[highestDay]) {
            highestDay = i;
        }
    }

    average = total / 7;

    printf("\n--- Weekly Study Summary ---\n");
    printf("Total study hours: %.2f\n", total);
    printf("Daily average: %.2f hours\n", average);
    printf("Highest study hours: Day %d (%.2f hours)\n",
           highestDay + 1, hours[highestDay]);

    printf("\n--- Daily Study Chart ---\n");

    for (i = 0; i < 7; i++) {
        int stars = (int)hours[i];

        printf("Day %d: ", i + 1);

        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
