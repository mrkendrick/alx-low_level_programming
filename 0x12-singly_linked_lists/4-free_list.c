#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to first node
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		free(current_node->str);
		head = head->next;
		free(current_node);
	}
}
