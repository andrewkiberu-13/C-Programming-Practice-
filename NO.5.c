#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int guess;
    char playAgain;



    do {
        number = rand() % 1000 + 1;

        printf("I have a number between 1 and 1000. \n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess:");
        scanf("%d", &guess);

        while (guess != number){
            if (guess < number){
                printf("Too low. Try again:");
            }
            else {
                printf("Too high. Try again");
        }
        scanf("%d", &guess);
    }

    printf("Excellent! You guessed the number!\n");
    printf("Would you like to play again (y or n)?");
    scanf(" %c", &playAgain);
    }
    while (playAgain == 'y' || playAgain == 'Y');
    printf("Thanks for playing!\n");

    return 0;
}
