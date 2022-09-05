#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int x, y;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	x = n >> index;
	y = x & 1;

	return (y);
}
