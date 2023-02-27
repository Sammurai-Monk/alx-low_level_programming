#include "main.h"

/**
 * rev_string -Check if character is dig
 * @s: The num
 * Return: 1 for char 0 anyelse
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index = 1];
		s[len - index - 1] = tmp;
	}
}
