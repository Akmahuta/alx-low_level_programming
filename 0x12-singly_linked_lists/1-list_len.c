#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Prints the number of elements in a linked list
 * @h: Pointer to the list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
i	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
