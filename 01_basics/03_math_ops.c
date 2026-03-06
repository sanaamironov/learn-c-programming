#include <stdio.h>

/*
 * 03_math_ops.c
 * Purpose: Show arithmetic operators in C.
 */

int main(void)
{
    int a = 12;
    int b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);   /* Integer division */
    printf("a %% b = %d\n", a % b);

    return 0;
}
