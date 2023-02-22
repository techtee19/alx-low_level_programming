#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The times table to print
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int result = i * j;

			printf("%d", result);

			if (j < n)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
