#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * *reverse_listint - reverses a linked list
 * @head: start of node
 * Return: the address of the new node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;
	
	while (*head != NULL)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = curr;
	}
	*head = prev;
	return (*head);
}
