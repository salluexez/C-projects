#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing Number.\n");
    random = rand() % 100 + 1; // Generating between 0 to 100

    do
    {
        printf("\n Please enter your Guess betwwen (1 to 100): ");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random)
        {
            printf("Guess a larger number. \n");
        }
        else if (guess > random)
        {
            printf("Guess a smaller Number. \n");
        }
        else
        {
            printf("Congratulations You have successfully guessed the Number in %d attempts", no_of_guess);
        }

    } while (guess != random);

    printf("\n Thanks for playing.");
    printf("\n Developed by: salluexez");
}