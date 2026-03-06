#include <stdio.h>

/*
 * 05_guess_number.c
 * Purpose: Demonstrate loops, conditions, and user input.
 * Note: The target is fixed so beginners can focus on logic first.
 */

int main(void)
{
    const int target = 7;
    int guess = 0;

    printf("Guess the number from 1 to 10.\n");

    while (guess != target) {
        printf("Enter your guess: ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        if (guess < target) {
            printf("Too low.\n");
        } else if (guess > target) {
            printf("Too high.\n");
        } else {
            printf("Correct!\n");
        }
    }

    return 0;
}
