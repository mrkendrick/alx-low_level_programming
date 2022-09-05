#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at index
 * @head: pointer to head node
 * @idx: index
 * @n: data
 * Return: node of new data
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	current_node = *head;
	i = 0;

	while ((current_node) && (i < (idx - 1)))
	{
		current_node = current_node->next;
		i++;
	}
	if (new_node != NULL)
	{
		new_node->n = n;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		if ((i + 1) == idx)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
