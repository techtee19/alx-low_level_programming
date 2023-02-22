#include "main.h"
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_last_digit(98);
    print_last_digit(98);
    putchar('0' + r);
    putchar('\n');
    return (0);
    r = print_last_digit(0);
    print_last_digit(0);
    putchar('0' + r);
    putchar('\n');
    return (0);
    print_last_digit(-1024);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}
