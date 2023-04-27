#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * free_list - function that frees a list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *tempNode;

	while (head != NULL)
	{
		free(head->str);
		tempNode = head->next;
		free(head);
		head = tempNode;
}
