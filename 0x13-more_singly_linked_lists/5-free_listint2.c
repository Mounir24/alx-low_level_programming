#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tm;

	if (!head)
		return;

	while (*head)
	{
		tm = (*head)->next;
		free(*head);
		*head = tm;
	}

	free(tm);
	free(*head);
}
