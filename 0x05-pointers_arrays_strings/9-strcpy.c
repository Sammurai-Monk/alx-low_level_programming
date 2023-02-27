#include "main.h"

/**
 * _strcpy -Check if character is dig
 * @dest: The num
 * @src: S
 * Return: 1 for char 0 anyelse
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
