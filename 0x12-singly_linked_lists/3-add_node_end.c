#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a linked list
* @head: double pointer to the list_t list
* @str: str to put in the new node
*
* Return: address of element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
list_t *temp = *head;
unsigned int len = 0;

for (const char *c = str; *c != '\0'; c++)
{
len++;
}
new = malloc(sizeof(list_t));

if (!new)
{
return (NULL);
}

new->str = strdup(str);
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

for (; temp->next != NULL; temp = temp->next)

temp->next = new;
return (new);
}
