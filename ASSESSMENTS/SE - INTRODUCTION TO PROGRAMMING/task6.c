
#include <stdio.h>

#define SUBJECTS 3
#define DAYS 7

struct StudyLog {
    char subject[40];
    float hours[7];
};

void weeklyReport(struct StudyLog logs[], int count) {
    int i, j;
    float total, average;

    printf("\n========== Weekly Report ==========\n");

    for (i = 0; i < count; i++) {
        total = 0;

        for (j = 0; j < DAYS; j++) {
            total += logs[i].hours[j];
        }

        average = total / DAYS;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);
    }
}

void progressChart(struct StudyLog logs[], int count) {
    int i, j, k;

    printf("\n========== Daily Progress Chart ==========\n");

    for (i = 0; i < count; i++) {
        printf("\nSubject: %s\n", logs[i].subject);

        for (j = 0; j < DAYS; j++) {
            printf("Day %d: ", j + 1);

            for (k = 0; k < (int)logs[i].hours[j]; k++) {
                printf("*");
            }

            printf("\n");
        }
    }
}

int main() {
    struct StudyLog logs[SUBJECTS] = {
        {"C Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"Mathematics", {0, 0, 0, 0, 0, 0, 0}},
        {"Physics", {0, 0, 0, 0, 0, 0, 0}}
    };

    int choice, day, i;
    float hours;
    FILE *file;

    do {
        printf("\n===== Student Productivity Tracker =====\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter day number (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7) {
                printf("Invalid day number!\n");
                continue;
            }

            for (i = 0; i < SUBJECTS; i++) {
                do {
                    printf("Enter study hours for %s: ",
                           logs[i].subject);
                    scanf("%f", &hours);

                    if (hours < 0 || hours > 24) {
                        printf("Enter hours between 0 and 24.\n");
                    }
                } while (hours < 0 || hours > 24);

                logs[i].hours[day - 1] = hours;
            }

            printf("Study hours recorded successfully!\n");
        }

        else if (choice == 2) {
            weeklyReport(logs, SUBJECTS);
            progressChart(logs, SUBJECTS);
        }

        else if (choice == 3) {
            file = fopen("productivity_log.txt", "w");

            if (file == NULL) {
                printf("Error opening file!\n");
                return 1;
            }

            for (i = 0; i < SUBJECTS; i++) {
                fprintf(file, "%s", logs[i].subject);

                for (int j = 0; j < DAYS; j++) {
                    fprintf(file, ",%.2f", logs[i].hours[j]);
                }

                fprintf(file, "\n");
            }

            fclose(file);
            printf("Data saved to productivity_log.txt\n");
            printf("Exiting program. Keep studying!\n");
        }

        else {
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}

