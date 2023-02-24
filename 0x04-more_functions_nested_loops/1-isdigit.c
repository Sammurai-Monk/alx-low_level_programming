#include "main.h"

/**
 * _isdigit -Check if character is dig
 * @x: The num
 * Return: 1 for char 0 anyelse
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
