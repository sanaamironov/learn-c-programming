#include <stdio.h>

/*
 * 02_gradebook_file.c
 * Purpose: Demonstrate basic file output and input.
 */

int main(void)
{
    FILE *out_file = fopen("grades.txt", "w");
    FILE *in_file;
    char name[30];
    int score;

    if (out_file == NULL) {
        printf("Could not open grades.txt for writing.\n");
        return 1;
    }

    fprintf(out_file, "Alice 90\n");
    fprintf(out_file, "Bob 85\n");
    fclose(out_file);

    in_file = fopen("grades.txt", "r");
    if (in_file == NULL) {
        printf("Could not open grades.txt for reading.\n");
        return 1;
    }

    while (fscanf(in_file, "%29s %d", name, &score) == 2) {
        printf("Name: %s, Score: %d\n", name, score);
    }

    fclose(in_file);
    return 0;
}
