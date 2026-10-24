
#include <stdio.h>
#include <string.h>

char tasks[5][100];
int done[5] = {0};

void markTaskDone(int index) {
    if (index >= 0 && index < 5) {
        done[index] = 1;
    }
}

int main() {
    int i, choice;

    printf("Enter 5 tasks:\n");

    for (i = 0; i < 5; i++) {
        printf("Enter task %d: ", i + 1);
        scanf(" %99[^\n]", tasks[i]);
    }

    printf("\nEnter task number to mark as DONE (1-5): ");
    scanf("%d", &choice);

    markTaskDone(choice - 1);

    printf("\nUpdated Task List:\n");

    for (i = 0; i < 5; i++) {
        if (done[i]) {
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        } else {
            printf("%d. %s - PENDING\n", i + 1, tasks[i]);
        }
    }

    return 0;
}

