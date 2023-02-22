#include "main.h"
#include <stdio.h>

/**
 * print_alphabets - print alphabets lowercase
 *
 * Return: 0 Always
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar ('\n');

}
