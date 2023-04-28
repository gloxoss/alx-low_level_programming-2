#include "lists.h"

/**
  * add_node_end - add node to the end
  * @head: list_t**
  * @str: const char*
  * Return: list_t*
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *cursor;
	size_t i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	node->len = i;
	node->next = NULL;
	cursor = *head;

	if (cursor == NULL)
		*head = node;
	else
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = node;
	}
	return (*head);
}
