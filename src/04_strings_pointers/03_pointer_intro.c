#include <stdio.h>

/*
 * 03_pointer_intro.c
 * Purpose: Show the relationship between a variable and a pointer to it.
 */

int main(void)
{
    int value = 42;
    int *ptr = &value;

    printf("value = %d\n", value);
    printf("&value = %p\n", (void *)&value);
    printf("ptr = %p\n", (void *)ptr);
    printf("*ptr = %d\n", *ptr);

    *ptr = 100;
    printf("After *ptr = 100, value = %d\n", value);

    return 0;
}
