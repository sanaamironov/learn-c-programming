#include <stdio.h>
#include "stats.h"

/*
 * 03_array_stats.c
 * Purpose: Demonstrate functions that operate on arrays.
 */

double average_int_array(const int values[], int count)
{
    int i;
    int sum = 0;

    for (i = 0; i < count; i++) {
        sum += values[i];
    }

    return (double)sum / count;
}

int min_int_array(const int values[], int count)
{
    int i;
    int min = values[0];

    for (i = 1; i < count; i++) {
        if (values[i] < min) {
            min = values[i];
        }
    }

    return min;
}

int max_int_array(const int values[], int count)
{
    int i;
    int max = values[0];

    for (i = 1; i < count; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }

    return max;
}

int main(void)
{
    int scores[] = {88, 91, 76, 95, 84};
    int count = (int)(sizeof(scores) / sizeof(scores[0]));

    printf("Min: %d\n", min_int_array(scores, count));
    printf("Max: %d\n", max_int_array(scores, count));
    printf("Average: %.2f\n", average_int_array(scores, count));

    return 0;
}
