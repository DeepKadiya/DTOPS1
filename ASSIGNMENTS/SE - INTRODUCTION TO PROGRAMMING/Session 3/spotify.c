#include <stdio.h>

int main()
 {
    char playlistName[] = "Late Night Lo-Fi";
    int totalSongs = 45;
    float avgDuration = 3.35f;
    printf("My favorite Spotify playlist is '%s', which contains %d songs with an average duration of %.2f minutes per track.\n", 
           playlistName, totalSongs, avgDuration);

    return 0;
}

