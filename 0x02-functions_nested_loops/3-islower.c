#include "main.h"
#include <stdio.h>

/**
 * _islower - Return 1 if letter is lowercase, 0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _islower(int c)
{
	if (c >= 23 && c <= 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
