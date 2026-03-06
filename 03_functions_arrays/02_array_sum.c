#include <stdio.h>

/*
 * 02_array_sum.c
 * Purpose: Demonstrate array traversal.
 */

int main(void)
{
    int values[] = {4, 8, 15, 16, 23, 42};
    int count = (int)(sizeof(values) / sizeof(values[0]));
    int i;
    int sum = 0;

    for (i = 0; i < count; i++) {
        sum += values[i];
        printf("values[%d] = %d, running sum = %d\n", i, values[i], sum);
    }

    printf("Total sum = %d\n", sum);
    return 0;
}
