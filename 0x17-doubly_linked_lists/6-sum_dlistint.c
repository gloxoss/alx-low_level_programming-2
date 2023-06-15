#include "lists.h"

/**
 * sum_dlistint - Sum all dlistint_t list nodes.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all node values.
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}

