#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list.
 * @head: dlistint_t*
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
