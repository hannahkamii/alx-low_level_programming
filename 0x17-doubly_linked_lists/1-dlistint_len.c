#include "lists.h"

/**
 * dlistint_len - returns the length of element
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int data;

	data = 0;

	if (h == NULL)
		return (data);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		data++;
		h = h->next;
	}
	return (data);
}
