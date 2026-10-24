#include <stdio.h>

int main() {
    int likes = 100;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes: %d\n", likes);
    printf("Address stored in ptrLikes: %p\n", (void *)ptrLikes);

    return 0;
}
