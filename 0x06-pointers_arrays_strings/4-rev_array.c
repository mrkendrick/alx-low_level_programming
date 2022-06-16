#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int aux[n];

	for (int i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
