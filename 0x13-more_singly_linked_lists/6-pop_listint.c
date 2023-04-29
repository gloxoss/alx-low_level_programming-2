#include "lists.h"

/**
  * pop_listint - pop the head of listint_t
  * @head: listint_t**
  * Return: int
  */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *cursor;

	if (*head == NULL)
		return (0);
	cursor = *head;
	node = (*head)->n;
	*head = (*head)->next;
	free(cursor);
	return (node);
}
