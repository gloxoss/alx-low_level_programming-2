#include "lists.h"

/**
  * listint_len - get length of listint_t
  * @h: const listint_t*
  * Return: size_t
  */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			return (c);
		h = h->next;
		c++;
	}
	return (c);
}
