#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int total = 0;

	for (int num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			total += num;
		}
	}
	printf("%d\n", total);
	return (0);
}
