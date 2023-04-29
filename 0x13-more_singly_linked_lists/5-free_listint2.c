#include "lists.h"

/**
  * free_listint2 - free the listint_t list
  * @head: listint_t**
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}
	head = NULL;
}
