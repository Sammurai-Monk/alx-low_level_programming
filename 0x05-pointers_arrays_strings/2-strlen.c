#include <stdio.h>

/**
 * _strlen -Check if character is dig
 * @str: The num
 * Return: 1 for char 0 anyelse
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
