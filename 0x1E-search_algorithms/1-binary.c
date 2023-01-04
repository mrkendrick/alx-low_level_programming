#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @a: array to be checked
 * @start: start index of the array
 * @end: end index of the array
 * Return: void
*/
void print_array(int *a, int start, int end)
{
	while (start <= end)
	{
		printf("%d", a[start]);
		if (start < (end))
			printf(", ");
		start++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, middle;

	start = 0;
	end = size - 1;

	if (array != NULL)
	{
		while (start <= end)
		{
			printf("Searching in array: ");
			print_array(array, start, end);
			middle = start + (end - start) / 2;
			if (array[middle] > value)
				end = middle - 1;
			else if (array[middle] < value)
				start = middle + 1;
			else
				return (middle);
		}
	}
	return (-1);
}
