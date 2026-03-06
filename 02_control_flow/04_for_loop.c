#include <stdio.h>

/*
 * 04_for_loop.c
 * Purpose: Demonstrate a for loop and summation.
 */

int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i <= 5; i++) {
        sum += i;
        printf("After adding %d, sum = %d\n", i, sum);
    }

    printf("Final sum = %d\n", sum);
    return 0;
}
