/*
Name :Shariff lukalia
Reg no.PA106/G/28761/25
Date:06/10/2025
description :ProgrM displaying guessing game
*/
#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int main() {
    int secretNumber, guess;
    int attempts = 0;
    int maxAttempts = 10; // Optional limit to prevent infinite loops

    // Seed the random number generator with current time
    srand(time(0));
    // Generate a random number between 1 and 20
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20. Try to guess it!\n");


    while (1) { 
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        
        
        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the secret number %d!\n", secretNumber);
            printf("It took you %d attempts to guess correctly.\n", attempts);
            break;
            
        }

        // Optional: Check if maximum attempts are reached
        if (attempts >= maxAttempts) {
            printf("Sorry, you've used all %d attempts. The number was %d.\n", maxAttempts, secretNumber);
            break;
        }
    }

    return 0;
}