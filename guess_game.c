#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0, maxAttempts = 7;
    int won = 0;

    // Seed the random number generator to get a new number each run
    srand(time(0));
    secretNumber = (rand() % 50) + 1; // Secret number between 1 and 50

    printf("=== NUMBER GUESSING GAME ===\n");
    printf("I have chosen a number between 1 and 50.\n");
    printf("You have %d attempts!\n\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d/%d - Enter your guess: ", attempts + 1, maxAttempts);
        scanf("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("Great job! You guessed the right number in %d attempts!\n", attempts);
            won = 1;
            break;
        } else if (guess < secretNumber) {
            printf("Try a higher number!\n\n");
        } else {
            printf("Try a lower number!\n\n");
        }
    }

    if (won == 0) {
        printf("\nOut of attempts! The correct number was %d.\n", secretNumber);
    }

    return 0;
}