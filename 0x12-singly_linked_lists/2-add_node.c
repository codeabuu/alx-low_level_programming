#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
* @head: double pointer to the list_t list
* @str: new string to add in the node
*
* Return: the addr of new element,
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
const char *c;

for (c = str; *c != '\0'; c++)
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
new->next = (*head);
(*head) = new;

return (*head);
}
