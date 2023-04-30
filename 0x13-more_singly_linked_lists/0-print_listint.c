#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt;

	for (cnt = 0; h != NULL; cnt++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}

	return (cnt);
}
