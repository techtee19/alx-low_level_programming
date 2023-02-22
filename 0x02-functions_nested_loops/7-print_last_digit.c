#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -(n % 10);
	}
	else
	{
		last_digit = n % 10;
	}

	putchar(last_digit + '0');

	return (last_digit);
}
