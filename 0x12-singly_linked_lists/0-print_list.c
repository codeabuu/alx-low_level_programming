#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @h: pointer to the list_t list to print
*
* Return: the number of nodes printed
*/
size_t print_list(const list_t *h)
{
	size_t s = 0;
const list_t *current_node;

for (current_node = h; current_node != NULL; current_node = current_node->next)
{
if (!current_node->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", current_node->len, current_node->str);
}
s++;

}

return (s);
}
