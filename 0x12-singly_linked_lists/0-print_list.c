#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all data in a list
 * @h: pointer to first node
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	char *s;
	size_t i = 0;
	int j, k;

	while (h != NULL)
	{
		s = h->str;
		k = h->len;

		if (s == NULL)
		{
			printf("[%d] (nil)", 0);
		}
		else
		{
			printf("[%d] ", k);
			j = 0;

			while (s[j] != '\0')
			{
				printf("%c", s[j]);
				j++;
			}
		}
		i++;
		printf("\n");
		h = h->next;
	}
	return (i);
}
