#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * free_listint2 - function that frees a list
 * @head: start of node
 */
void free_listint2(listint_t **head)
{
	listint_t *tnode;
	listint_t *cnode;

	cnode = *head;


	while (cnode)
	{
		tnode = cnode->next;
		free_list(&head);
		cnode = tnode;
	}
	*head = NULL;
}
