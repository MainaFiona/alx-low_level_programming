#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while(h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
