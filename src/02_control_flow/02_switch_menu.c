#include <stdio.h>

/*
 * 02_switch_menu.c
 * Purpose: Show a switch statement on a simple menu choice.
 */

int main(void)
{
    int option = 2;

    printf("Menu option selected: %d\n", option);

    switch (option) {
        case 1:
            printf("You chose Add.\n");
            break;
        case 2:
            printf("You chose Search.\n");
            break;
        case 3:
            printf("You chose Exit.\n");
            break;
        default:
            printf("Unknown option.\n");
            break;
    }

    return 0;
}
