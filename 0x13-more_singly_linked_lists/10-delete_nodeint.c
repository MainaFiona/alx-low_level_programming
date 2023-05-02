#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: start of node
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *delete;
	listint_t *temp;

	temp = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		for (i = 0; temp != NULL && i != index - 1; i++)
		{
			temp = temp->next;
		}
		if (i != index - 1)
		{
			return (-1);
		}
		delete = temp->next;
		temp->next = temp->next->next;
		free(delete);
		return (1);
	}
}
