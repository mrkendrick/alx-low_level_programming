#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1 if successful, 0 otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int x = 1;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	x = ~(x << index);
	*n = *n & x;

	return (1);
}
