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
	listint_t *tempNode;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		tempNode = *head;
		free(*head);
		*head = tempNode->next;
	}
	*head = NULL;
}
