#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    if (*ptr == '\0' || *ptr == '\n') {
        printf("Input is empty.\n");
    } else {
        while (*ptr != '\0' && *ptr != '\n') {
            printf("%c", *ptr);
            ptr++;
        }
        printf("\n");
    }

    return 0;
}
