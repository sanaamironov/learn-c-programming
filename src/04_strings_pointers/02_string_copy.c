#include <stdio.h>

/*
 * 02_string_copy.c
 * Purpose: Copy a string manually.
 */

void string_copy(char dest[], const char src[])
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int main(void)
{
    char source[] = "kernel";
    char destination[20];

    string_copy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
