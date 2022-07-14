#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add a node to the beginning of a list
 * @head: pointer that points to pointer of first node
 * @str: string to be added
 * Return: pointer to address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	int i;
	char *s;
	list_t *new_node;

	new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node != NULL)
	{
		s = strdup(str);
		new_node->str = s;

		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}

		i = 0;

		while (s[i] != '\0')
		{
			i++;
		}
		new_node->len = i;
		new_node->next = (*head);
		(*head) = new_node;

		return (*head);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
