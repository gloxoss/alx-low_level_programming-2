#include "lists.h"

/**
  * get_nodeint_at_index - get node at specific index
  * @head: listint_t*
  * @index: unsigned int
  * Return: listint_t*
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;

	for (i = 0; i < index && head->next; i++)
	{
		head = head->next;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (head);
}
