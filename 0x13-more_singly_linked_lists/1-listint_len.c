#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the No of elements in list
 *
 * @h: A pointer to listint_t structure
 *
 * Return => number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
