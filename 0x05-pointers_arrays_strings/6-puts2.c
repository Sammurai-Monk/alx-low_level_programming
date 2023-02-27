#include "main.h"

/**
 * puts2 -Check if character is dig
 * @str: The num
 * Return: 1 for char 0 anyelse
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
