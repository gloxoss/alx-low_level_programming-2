#include "lists.h"

/**
  * print_listint - print a listint_t
  * @h: const listint_t*
  * Return: size_t
  */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *cursor = h;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		c++;
		cursor = cursor->next;
	}
	return (c);
}
