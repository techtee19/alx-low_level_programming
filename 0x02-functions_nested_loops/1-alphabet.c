#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 *
 * Return: 0 Always
 */

void print_alphabet(void)
{
	char (alphabet);

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar ('\n');

}
