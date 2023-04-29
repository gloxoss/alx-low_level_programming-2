#include "lists.h"

/**
  * free_listint - free the listint_t list
  * @head: listint_t*
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head != NULL)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
