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
	int a = 0, b = 1, i;
	int fibonacci_numbers[50];
	fibonacci_numbers[0] = a;
	fibonacci_numbers[1] = b;

	for (i = 2; i < 50; i++)
	{
		fibonacci_numbers[i] = fibonacci_numbers[i-1] + fibonacci_numbers[i-2];
	}

	for (i = 0; i < 49; i++)
	{
		printf("%d, ", fibonacci_numbers[i]);
	}
	printf("%d\n", fibonacci_numbers[49]);
	return (0);
}
