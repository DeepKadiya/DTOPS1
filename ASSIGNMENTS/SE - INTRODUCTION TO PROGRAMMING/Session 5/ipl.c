#include <stdio.h>

int main() {
    char teamCode;

   
    printf(" Welcome to the IPL Fan Bot \n");
    printf("Enter a team code to hear your cheer:\n");
    printf("M : Mumbai Indians\n");
    printf("C : Chennai Super Kings\n");
    printf("R : Royal Challengers Bengaluru\n");
    printf("K : Kolkata Knight Riders\n");
    printf("----------------------------------\n");
    printf("Your Choice: ");
    
   
    scanf("%c", &teamCode);

   
    if (teamCode == 'M' || teamCode == 'm') {
        printf("\nAala Re! Go Mumbai Indians! ??\n");
    } 
    else if (teamCode == 'C' || teamCode == 'c') {
        printf("\nWhistle Podu! Chennai Super Kings for the win! ??\n");
    } 
    else if (teamCode == 'R' || teamCode == 'r') {
        printf("\nEe Sala Cup Naamde! Play Bold, RCB! ??\n");
    } 
    else if (teamCode == 'K' || teamCode == 'k') {
        printf("\nKorbo Lorbo Jeetbo Re! Go KKR! ??\n");
    } 
    else {
        printf("\nTeam not found! Please enter a valid letter from the menu.\n");
    }

    return 0;
}

