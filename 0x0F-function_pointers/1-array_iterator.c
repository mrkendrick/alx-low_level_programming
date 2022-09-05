#include "function_pointers.h"

/**
 * array_iterator - executes function on every parameter of the array
 * @array: array to be checked
 * @size: size of the array
 * @action: pointer function
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
