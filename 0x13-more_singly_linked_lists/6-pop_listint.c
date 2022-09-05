#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: pointer to the head node
 * Return: head node data or 0
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		temp = *head;
		*head = (temp->next);
		free(temp);
		return (i);
	}
}
