#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to the head node
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
