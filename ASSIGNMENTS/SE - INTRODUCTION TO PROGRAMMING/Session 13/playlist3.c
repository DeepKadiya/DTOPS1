#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Channa Mereya\n");
    fprintf(fp, "Raataan Lambiyan\n");

    fclose(fp);

    printf("Two songs added successfully!\n");

    return 0;
}
