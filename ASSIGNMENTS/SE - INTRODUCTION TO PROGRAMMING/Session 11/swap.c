#include <stdio.h>

void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1 = 25;
    int playlist2 = 40;

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("Playlist 1 songs: %d\n", playlist1);
    printf("Playlist 2 songs: %d\n", playlist2);

    return 0;
}
