#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new at the end of a linked lis
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL IF IT failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	p->str = strdup(str);
	p->len = len;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	while (t->next)
		t = t->next;
	t->next = p;
	return (p);
}
