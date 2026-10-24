#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "Tum Hi Ho\n");
    fprintf(fp, "Kesariya\n");
    fprintf(fp, "Apna Bana Le\n");

    fclose(fp);

    printf("Songs written to playlist.txt successfully.\n");

    return 0;
}
