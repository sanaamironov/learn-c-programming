#include <stdio.h>

/*
 * 01_functions_intro.c
 * Purpose: Show how to define and call functions.
 */

int square(int x)
{
    return x * x;
}

void print_line(void)
{
    printf("--------------------\n");
}

int main(void)
{
    int value = 6;
    int result = square(value);

    print_line();
    printf("Value  = %d\n", value);
    printf("Square = %d\n", result);
    print_line();

    return 0;
}
