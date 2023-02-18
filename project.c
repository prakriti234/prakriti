#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void display_move(int m) {
    if (m == 1)
        printf("Rock");
    else if (m == 2)
        printf("Paper");
    else
        printf("Scissor");
}

int main() {
    srand(time(NULL));

    int computer, user,ch;
    printf("***ENTER 0 TO START THE GAME***\n");
    scanf("%d",&ch);
    if(ch==0){

    while (1) {
        printf("Enter 1 for Rock.\n");
        printf("Enter 2 for Paper.\n");
        printf("Enter 3 for Scissor.\n");
        printf("Enter 0 to exit.\n");
        printf("Choice >> ");
        scanf("%d", & user);

        if (user == 0)
            break;

        if (!(user >= 1 && user <= 3)) {
            printf("\nEnter a valid choice!\n\n");
            continue;
        }

        computer = rand() % 3 + 1;

        printf("\nYou played     : ");
        display_move(user);
        printf("\nComputer played: ");
        display_move(computer);

        if (computer == user)
            printf("\nIt is a tie!\n");
        else if (computer == 1 && user == 3)
            printf("\nComputer wins!\n");
        else if (computer == 2 && user == 1)
            printf("\nComputer wins!\n");
        else if (computer == 3 && user == 2)
            printf("\nComputer wins!\n");
        else
            printf("\nYou win!\n");

        printf("\n");
    }
    }

    return 0;
}