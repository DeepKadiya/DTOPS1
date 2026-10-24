
#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE];
    int i, j, temp;
    int min, max;
    long long sum = 0;
    double mean;

    // Input exactly 10 integers
    printf("Enter exactly 10 integers:\n");

    for (i = 0; i < SIZE; i++) {
        printf("Enter integer %d: ", i + 1);

        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input! Please enter integers only.\n");
            return 1;
        }
    }

    // Initialize minimum and maximum
    min = arr[0];
    max = arr[0];

    // Find minimum, maximum, and sum
    for (i = 0; i < SIZE; i++) {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];

        sum += arr[i];
    }

    // Calculate arithmetic mean
    mean = (double)sum / SIZE;

    printf("\nMinimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Arithmetic mean: %.2f\n", mean);

    // Compare the mean's distance from minimum and maximum
    if (mean - min < max - mean)
        printf("Mean is closer to the minimum.\n");
    else if (mean - min > max - mean)
        printf("Mean is closer to the maximum.\n");
    else
        printf("Mean is exactly midway between minimum and maximum.\n");

    // Sort in ascending order using bubble sort
    for (i = 0; i < SIZE - 1; i++) {
        for (j = 0; j < SIZE - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nSorted array in ascending order:\n");

    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

