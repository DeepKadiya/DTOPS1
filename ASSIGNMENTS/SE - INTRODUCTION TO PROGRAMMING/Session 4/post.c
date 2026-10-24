#include <stdio.h>

int main() {
    
    int likes = 850;
    int comments = 250;
    int shares = 60;

  
    int isTrending = (likes >= 1000) || (comments > 200 && shares >= 50);

    if (isTrending == 1) {
        printf("Post Status: This post is TRENDING! \n");
    } else {
        printf("Post Status: Normal engagement.\n");
    }

    
    printf("[Raw System Value: %d]\n", isTrending);

    return 0;
}

