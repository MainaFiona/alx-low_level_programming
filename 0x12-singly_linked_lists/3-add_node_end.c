#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * *add_node_end - function that adds a new node at the end of a list
 * @str: string
 * @head: head of linked list
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *newNode;
	list_t *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (strdup(str) == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
		return (newNode);

	}
}
