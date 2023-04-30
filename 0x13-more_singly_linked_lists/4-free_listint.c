#include "lists.h"

/**
* free_listint - frees a linked list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *temp;
	for (temp = NULL; head; temp = head, head = head->next)
{
free(temp);
}
}

