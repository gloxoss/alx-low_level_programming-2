#include "lists.h"

/**
  * add_node - add node to the head
  * @head: list_t**
  * @str: const char*
  * Return: list_t*
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	node->len = i;
	node->next = *head;
	*head = node;
	return (*head);
}
