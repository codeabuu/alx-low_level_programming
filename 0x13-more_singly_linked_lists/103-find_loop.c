#include "lists.h"

/**
* free_listint_safe - frees a linked list
* @h: pointer to the first node in the linked list
*
* Return: number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;

if (!h || !*h)
return (0);

for (; *h; len++)
{
diff = *h - (*h)->next;
if (diff > 0)
{
listint_t *temp = (*h)->next;
free(*h);
*h = temp;
}
else
{
free(*h);
*h = NULL;
break;
}
}

return (len);
}

