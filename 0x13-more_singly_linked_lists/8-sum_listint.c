#include "lists.h"

/**
  * sum_listint - sum of listint_t elements
  * @head: listint_t*
  * Return: int
  */
int sum_listint(listint_t *head)
{
	int s = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
