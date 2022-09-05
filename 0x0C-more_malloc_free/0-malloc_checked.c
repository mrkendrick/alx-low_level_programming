#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc and exit if failed
 * @b: variable to be assigned
 * Return: pointer if successful
*/

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
