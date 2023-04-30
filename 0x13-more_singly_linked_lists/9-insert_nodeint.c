#include "lists.h"

/**
  * insert_nodeint_at_index - insert node at specific index
  * @head: listint_t**
  * @idx: unsigned int
  * @n: int
  * Return: listint_t*
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *node, *tempo = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = tempo;
		*head = node;
		return (node);
	}
	while (i < (idx - 1))
	{
		if (tempo == NULL || tempo->next == NULL)
			return (NULL);
		tempo = tempo->next;
		i++;
	}
	node->next = tempo->next;
	tempo->next = node;
	return (node);
}
