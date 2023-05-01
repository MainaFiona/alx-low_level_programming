#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - deletes the head node of a  list
 * @head: start of node
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int retval = -1;
	listint_t *nextNode = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	nextNode = (*head)->next;
	retval =(*head)->n;
	free(*head);
	*head = nextNode;

	return (retval);
}
