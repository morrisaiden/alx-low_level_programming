#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints a linked list
 * @h: pointer t  head of list
 * Return: No of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
