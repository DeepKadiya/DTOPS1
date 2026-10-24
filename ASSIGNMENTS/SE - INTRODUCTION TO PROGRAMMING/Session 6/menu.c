
#include <stdio.h>

int main() {
    int choice;
    char teams[10][50] = {
        "Chennai Super Kings",
        "Mumbai Indians",
        "Royal Challengers Bengaluru"
    };
    int count = 3;

    while (1) {
        printf("\n===== IPL Teams Menu =====\n");
        printf("1. View Favorite IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nYour Favorite IPL Teams:\n");
            for (int i = 0; i < count; i++) 
			{
                printf("%d. %s\n", i + 1, teams[i]);
            }
        }
        else if (choice == 2) {
            if (count < 10) {
                printf("Enter new team name: ");
                scanf(" %49[^\n]", teams[count]);
                count++;
                printf("Team added successfully!\n");
            } else {
                printf("Team list is full!\n");
            }
        }
        else if (choice == 3) {
            printf("Exiting the app. Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

