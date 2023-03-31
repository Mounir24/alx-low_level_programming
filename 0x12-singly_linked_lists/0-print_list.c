#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		if (head->str != NULL)
			printf("[%d] %s\n", head->len, head->str);
		else
			printf("[0] (nil)\n");

		count += 1;
		head = head->next;
	}

	return (count);
}
