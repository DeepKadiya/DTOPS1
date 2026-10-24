#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100], username[6];

    printf("Enter your full name: ");
    scanf(" %99[^\n]", fullName);

    if (strlen(fullName) < 5) {
        strcpy(username, fullName);
    } else {
        strncpy(username, fullName, 5);
        username[5] = '\0';
    }

    printf("Generated username: %s\n", username);

    return 0;
}
