#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;
    int no_guess = 0;
    int guess;
    srand(time(0));
    randomNumber = (rand() % 100) + 1;
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    do
    {
    printf("Guess the number: ");
    scanf("%d", &guess);
    if (guess>randomNumber)
    {
        printf("Go lower \n");
    }
    else
    {
        printf("Go higher \n");
    }
    
    no_guess++;
    } while (guess!=randomNumber);

    printf("You guessed the correct number in %d guesses \n", no_guess);
    

    return 0;

}
