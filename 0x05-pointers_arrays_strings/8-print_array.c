#include "main.h"
#include <stdio.h>

/**
 * print_array -Check if character is dig
 * @a: The num
 * @n: No
 * Return: 1 for char 0 anyelse
 */

void print_array(int *a, int *n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
