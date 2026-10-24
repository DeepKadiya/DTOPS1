#include <stdio.h>

void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
        *(followers + i) += 100;
    }
}

int main() {
    int followers[5] = {500, 1200, 800, 2000, 1500};

    incrementFollowers(followers, 5);

    printf("Updated Instagram followers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Friend %d: %d\n", i + 1, followers[i]);
    }

    return 0;
}
