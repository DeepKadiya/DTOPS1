#include <stdio.h>

int main() {
    
    int followerCountA = 1000;

    printf("Post-Increment (count++) \n");
    printf("Original Value: %d\n", followerCountA); 

    
    printf("Value DURING operation (count++): %d\n", followerCountA++); 

   
    printf("Value AFTER operation is complete: %d\n\n", followerCountA); 


   
    int followerCountB = 1000;

    printf(" Pre-Increment (++count) \n");
    printf("Original Value: %d\n", followerCountB);

   
    printf("Value DURING operation (++count): %d\n", ++followerCountB); 


    printf("Value AFTER operation is complete: %d\n", followerCountB); 

    return 0;
}

