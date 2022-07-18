#include "lists.h"
#include "stdio.h"
#include "stdlib.h"
#include "stddef.h"

/**
 * print_listint - prints all the elements of a node
 * @h: pointer to the head node
 * Return: number of nodes in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
