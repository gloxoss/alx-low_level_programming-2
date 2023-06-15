#include "lists.h"

/**
 * dlistint_len - Get the length of a dlistint_t list
 * @h: const dlistint_t
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nc = 0;

	while (h)
	{
		nc++;
		h = h->next;
	}

	return (nc);
}
