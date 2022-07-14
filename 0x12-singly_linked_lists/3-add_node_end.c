#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to pointer to first node of the list
 * @str: string to be added
 * Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int i;
	list_t *new_node, *last_node;

	new_node = (list_t *)malloc(sizeof(list_t));
	last_node = *head;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	s = strdup(str);
	new_node->str = s;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	;
	new_node->len = i;
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
