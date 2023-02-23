#include "main.h"
#include <stdio.h>


/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c, i;
	int fibonacci_numbers[50] = {a, b};

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		fibonacci_numbers[i] = b;
	}

	for (i = 0; i < 49; i++)
	{
		printf("%d, ", fibonacci_numbers[i]);
	}
	printf("%d\n", fibonacci_numbers[49]);
	return (0);
}
