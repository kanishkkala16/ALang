#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, n=1;
    srand(time(0));
    number = rand() % 100 + 1; // this line generates a random number btw 1 and 100
    printf("\"****GUESS THE NUMBER !!****\" \n");
    printf("Welcome to the game.\n");
    printf("Instructions: The computer has generated a random number between 1 and 100 and you have to guess it.\n");
    printf("Good luck ! \n");
    printf("Guess the number generated btw 1 and 100 \n");
    do
    {   
        
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Guess a lower number \n");
        }

        else if (guess < number)
        {
            printf("Guess a higher number \n");
        }

        else
        {
            printf("Hurrah!! You have guessed the number \n");
            printf("The number is %d and you guessed it in %d attempts \n", number, n);
        }
        n++;

    } while (guess != number);

    return 0;
}
    
