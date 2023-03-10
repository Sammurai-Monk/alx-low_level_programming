#include "main.h"

/**
 * _puts -Check if character is dig
 * @str: The num
 * Return: 1 for char 0 anyelse
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
