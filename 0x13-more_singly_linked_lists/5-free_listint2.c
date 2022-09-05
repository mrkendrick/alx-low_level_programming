#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees a list
 * @head: pointervto head
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			current_node = *head;
			*head = (current_node)->next;
			free(current_node);
		}
	}
}
