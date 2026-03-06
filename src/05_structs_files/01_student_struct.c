#include <stdio.h>

/*
 * 01_student_struct.c
 * Purpose: Introduce a simple struct type.
 */

struct Student {
    char name[30];
    int id;
    double gpa;
};

int main(void)
{
    struct Student s = {"Ada", 1001, 3.9};

    printf("Student name: %s\n", s.name);
    printf("Student id: %d\n", s.id);
    printf("Student gpa: %.2f\n", s.gpa);

    return 0;
}
