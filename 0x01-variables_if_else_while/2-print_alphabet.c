#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0
 *
 */

/* This program prints the alphabet in lowercase */

int main(void)
{
	char l_letter;

	for (l_letter = 97; l_letter <= 122; l_letter++)
	{
		putchar(l_letter);
	}

	putchar('\n');

	return (0);
}
