#include "lists.h"

/**
  * free_list - free a list
  * @head: list_t*
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
