#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int num;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
	}

	printf("The sum of all the multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
