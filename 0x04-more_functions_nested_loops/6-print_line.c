#include "main.h"

/**
 * print_line  - Check if character is dig
 * @n: The num
 * Return: 1 for char 0 anyelse
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
