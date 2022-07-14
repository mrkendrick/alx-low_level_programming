#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to first node
 * Return: number of elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
