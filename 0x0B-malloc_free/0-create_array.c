#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of the array
 * @c: character
 * Return: pointer to the array or NUL
*/
char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0 || ar == 0)
	{
		return ('\0');
	}
	while (size--)
	{
		ar[size] = c;

	}
	return (ar);

}
