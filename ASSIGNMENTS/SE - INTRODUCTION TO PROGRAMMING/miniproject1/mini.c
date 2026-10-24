
#include <stdio.h>





void saveData(int minutes[]) {
    FILE *fp = fopen(FILE_NAME, "w");

    if (fp == NULL) {
        printf("Error saving file!\n");
        return;
    }

    for (int i = 0; i < DAYS; i++) {
        fprintf(fp, "%d\n", minutes[i]);
    }

    fclose(fp);
    printf("Music data saved successfully!\n");
}

void loadData(int minutes[]) {
    FILE *fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        return;
    }

    for (int i = 0; i < DAYS; i++) {
        if (fscanf(fp, "%d", &minutes[i]) != 1) {
            break;
        }
    }

    fclose(fp);
}


void logMinutes(int minutes[]) {
    for (int i = 0; i < DAYS; i++) {
        do {
            printf("Enter listening minutes for day %d: ", i + 1);

            if (scanf("%d", &minutes[i]) != 1) {
                printf("Invalid input! Enter a number.\n");

                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF);
                minutes[i] = -1;
            }

            if (minutes[i] < 0) {
                printf("Minutes cannot be negative.\n");
            }
        } while (minutes[i] < 0);
    }

    saveData(minutes);
}


void weeklyReport(void) {
    FILE *fp = fopen(FILE_NAME, "r");
    int value, total = 0, highest = 0, count = 0;

    if (fp == NULL) {
        printf("No saved data found. Please log your minutes first.\n");
        return;
    }

    while (count < DAYS && fscanf(fp, "%d", &value) == 1) {
        total += value;

        if (count == 0 || value > highest) {
            highest = value;
        }

        printf("Day %d: %d minutes\n", count + 1, value);
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No listening data available.\n");
        return;
    }

    printf("\n--- Weekly Report ---\n");
    printf("Total minutes: %d\n", total);
    printf("Average minutes: %.2f\n", (float)total / count);
    printf("Highest listening time: %d minutes\n", highest);
}


void resetData(int minutes[]) {
    char confirm;

    printf("Are you sure you want to reset all data? (y/n): ");
    scanf(" %c", &confirm);

    if (confirm == 'y' || confirm == 'Y') {
        FILE *fp = fopen(FILE_NAME, "w");

        if (fp == NULL) {
            printf("Could not clear the file. Data was not reset.\n");
            return;
        }

        
        fclose(fp);

        for (int i = 0; i < DAYS; i++) {
            minutes[i] = 0;
        }

        printf("Weekly data reset successfully!\n");
    } else {
        printf("Reset cancelled.\n");
    }
}

int main(void) {
    int minutes[DAYS] = {0};
    int choice;

    loadData(minutes);

    do {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log weekly listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Reset weekly data\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice! Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            continue;
        }

        switch (choice) {
            case 1:
                logMinutes(minutes);
                break;

            case 2:
                weeklyReport();
                break;

            case 3:
                resetData(minutes);
                break;

            case 4:
                printf("Thank you for using Music Listening Logger!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

