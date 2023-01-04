#include "search_algos.h"
#include "math.h"

/**
 * jump_search - searches for a value in an array of integers using
 * the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), current, i, prev;

	if (array != NULL)
	{
		current = 0;
		do {
			printf("Value checked array[%lu] = [%d]\n", current, array[current]);
			if (array[current] == value)
			{
				return (current);
			}
			prev = current;
			current += step;
		} while (current < size && array[current] < value);

		printf("Value found between indexes [%lu] and [%lu]\n",
		prev, current);

		for (i = prev; i < size && i <= current; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
		}
	}
	return (-1);
}
