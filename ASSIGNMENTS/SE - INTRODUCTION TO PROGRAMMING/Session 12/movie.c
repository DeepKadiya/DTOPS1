#include <stdio.h>

struct MovieShow {
    char Movie[50];
    int Screen;

    struct Time {
        int hours;
        int minutes;
    } time;
};

int main() {
    struct MovieShow show = {"Pushpa 2", 3, {18, 30}};

    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show.Movie, show.Screen,
           show.time.hours, show.time.minutes);

    return 0;
}
