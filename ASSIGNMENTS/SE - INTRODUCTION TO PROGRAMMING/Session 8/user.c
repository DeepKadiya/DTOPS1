
#include <stdio.h>

int getUserInitials(char name[]) {
    printf("%c", name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i + 1]);
        }
    }
}

int main() {
    printf("Initials: ");
    getUserInitials("Virat Kohli");
    printf("\n");

    return 0;
}

