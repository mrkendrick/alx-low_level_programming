#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: pointer to head node
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
