#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	for( cnt = 0; h = h->next; cnt ++)
	{
		printf("%d\n", h->n);
	}

	return (cnt);
}
