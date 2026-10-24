
#include <stdio.h>

int main() {
    int dailySteps[7] = {4500, 6000, 7500, 5000, 8000, 9500, 7000};
    int i;

    for (i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}

