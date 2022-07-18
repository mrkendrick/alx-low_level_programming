#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to head node
 * @index: list index
 * Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}
