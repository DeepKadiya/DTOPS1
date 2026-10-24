#include <stdio.h>


int isEven(int num) {

 
    if (num % 2 == 0) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    int num = 10;


    if (isEven(num)) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
