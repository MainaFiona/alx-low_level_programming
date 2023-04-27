#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 * *add_node - function that adds a new node at the beginning of a list
 * @str: string
 * @head: head of linked list
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	if (str[i])
	{
		i++;
	}
	newNode->next = *head;
	newNode->len = i;
	newNode->str = strdup(str);
	*head = newNode;

	return (newNode);
}
