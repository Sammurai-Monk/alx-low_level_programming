#include "main.h"
#include <stdio.h>

/**
 * print_rev -Check if character is dig
 * @s: The num
 * Return: 1 for char 0 anyelse
 */

void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
