#include <stdio.h>

/*
 * 01_string_length.c
 * Purpose: Compute string length manually to reinforce arrays and '\0'.
 */

int string_length(const char text[])
{
    int length = 0;

    while (text[length] != '\0') {
        length++;
    }

    return length;
}

int main(void)
{
    char word[] = "systems";

    printf("Word: %s\n", word);
    printf("Length: %d\n", string_length(word));

    return 0;
}
