
#include <stdio.h>

float calculateAverage(int amounts[], int size) {
    int sum = 0;
    int i;

    for (i = 0; i < size; i++) {
        sum += amounts[i];
    }

    return (float)sum / size;
}

int main() {
    int dailyAmounts[7] = {200, 150, 300, 250, 100, 350, 250};
    float average;

    average = calculateAverage(dailyAmounts, 7);

    printf("Average weekly spend: Rs. %.2f\n", average);

    return 0;
}

