
#include <stdio.h>

int main() {
    int cricketScores[4][2] = {
        {180, 165},
        {145, 190},
        {210, 205},
        {175, 182}
    };

    int i, highest;

    for (i = 0; i < 4; i++) {
        highest = cricketScores[i][0];

        if (cricketScores[i][1] > highest) {
            highest = cricketScores[i][1];
        }

        printf("Match %d: Highest Score = %d\n", i + 1, highest);
    }

    return 0;
}

