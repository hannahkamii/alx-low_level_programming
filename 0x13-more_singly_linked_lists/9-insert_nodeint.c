#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *p;
	listint_t *t = *head;

	p = malloc(sizeof(listint_t));
	if (!p || !head)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			p->next = t->next;
			t->next = p;
			return (p);
		}
		else
			t = t->next;
	}
	return (NULL);
}
