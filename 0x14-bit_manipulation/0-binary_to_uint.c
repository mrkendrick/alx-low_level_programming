#include "main.h"
#include <stddef.h>

/**
 * expo - finds the exponient of a number
 * @i: number
 * @j: number
 * Return: result
*/

int expo(unsigned int i, unsigned int j)
{
	unsigned int k, n;

	n = 1;
	for (k = 0; k < j; k++)
	{
		n *= i;
	}
	return (n);
}
/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: binary character array
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j, k;

	i = 0;
	j = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if ((b[i] != 48) && (b[i] != 49))
		{
			return (0);
		}
		i++;
	}

	k = 0;
	while (i > 0)
	{
		i--;
		if (b[i] == 49)
		{
			j = j + (1 * expo(2, k));
		}
		k++;
	}
	return (j);
}
