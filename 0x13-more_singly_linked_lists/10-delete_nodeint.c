#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: index
 * Return: 1 if successful, -1 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *temp;
	unsigned int i;

	i = 0;
	temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while ((temp != NULL) && (i < index - 1))
	{
		temp = temp->next;
		i++;
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
	}
	next_node = temp->next->next;
	free(temp->next);
	temp->next = next_node;
	return (1);
}

