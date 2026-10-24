
#include <stdio.h>

int main() {
    int choice, guess;

    printf("===== Guess the Song =====\n");
    printf("Guess the randomly selected song!\n");
    printf("1. Perfect\n");
    printf("2. Shape of You\n");
    printf("3. Believer\n");

    choice = 2;  // Selected song

    do {
        printf("\nEnter your song guess (1-3): ");
        scanf("%d", &guess);

        if (guess == choice) {
            printf("Correct! You guessed the song!\n");
        } else {
            printf("Wrong guess! Try again.\n");
        }

    } while (guess != choice);

    printf("Thanks for playing!\n");

    return 0;
}

