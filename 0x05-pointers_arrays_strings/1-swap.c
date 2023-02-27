#include <stdio.h>

/**
 * swap_int - Check if character is dig
 * @a: The num
 * @b: Second
 * Return: 1 for char 0 anyelse
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
