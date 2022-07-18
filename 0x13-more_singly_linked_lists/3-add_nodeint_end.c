#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - add node at the end of a list
 * @head: pointer to head node
 * @n: element to add
 * Return: pointer to element or null
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	last_node = *head;

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		return (new_node);
	}
	return (NULL);
}
