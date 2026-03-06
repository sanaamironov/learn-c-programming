#include <stdio.h>

/*
 * 03_while_loop.c
 * Purpose: Demonstrate a while loop.
 */

int main(void)
{
    int count = 1;

    while (count <= 5) {
        printf("Count = %d\n", count);
        count++;
    }

    return 0;
}
