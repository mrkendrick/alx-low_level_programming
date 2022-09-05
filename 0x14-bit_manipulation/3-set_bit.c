#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: integer
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int x = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	x <<= index;
	*n = *n | x;

	return (1);
}
