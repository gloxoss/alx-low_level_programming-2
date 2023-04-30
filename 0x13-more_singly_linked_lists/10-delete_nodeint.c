#include "lists.h"

/**
  * delete_nodeint_at_index - delete listint_t node at specific index
  * @head: listint_t**
  * @index: unsigned int
  * Return: int
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tempo, *cursor = *head;

	if (cursor == NULL)
		return (-1);
	if (index == 0)
	{
		*head = cursor->next;
		free(cursor);
		return (1);
	}
	for (i = 0; cursor != NULL && i < index - 1; i++)
		cursor = cursor->next;
	if (i != index - 1 || cursor->next == NULL)
		return (-1);
	tempo = cursor->next;
	cursor->next = tempo->next;
	free(tempo);
	return (1);
}
