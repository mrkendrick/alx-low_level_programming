#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be checked
 * @size: size of the array
 * @cmp: pointer function
 * Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);

}
