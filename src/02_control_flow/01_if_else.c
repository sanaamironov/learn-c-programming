#include <stdio.h>

/*
 * 01_if_else.c
 * Purpose: Demonstrate conditional execution.
 */

int main(void)
{
    int score = 78;

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D or below\n");
    }

    return 0;
}
