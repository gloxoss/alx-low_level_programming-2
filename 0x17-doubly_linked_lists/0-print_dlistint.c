#include "lists.h"

/**
 * print_dlistint - Prints elements of dlistint_t list.
 * @h: const dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nc = 0;

	while (h)
	{
		nc++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nc);
}
