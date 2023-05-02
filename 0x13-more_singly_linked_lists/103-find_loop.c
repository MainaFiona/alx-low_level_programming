#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * *find_listint_loop - function that finds a loop in a linked list
 * @head: head of linked list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *outer = head;
	int count = 0;

	while (outer != NULL)
	{
		outer = outer->next;
		count++;
		listint_t *inner = head;
		int k = count;

		while (k > 0)
		{
			if (inner == outer)
			{
				return (1);
			}
			inner = inner->next;
			k--;
		}
	}
	return (0);
}
