#include <stdio.h>

/*
 * 02_formatted_io.c
 * Purpose: Demonstrate variables and formatted output.
 */

int main(void)
{
    int age = 20;
    double temperature = 72.5;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Temperature: %.1f\n", temperature);
    printf("Grade: %c\n", grade);

    return 0;
}
