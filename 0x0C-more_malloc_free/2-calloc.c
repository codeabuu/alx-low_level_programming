#include <stdlib.h>

#include "main.h"

/**
 * _memset - fills memory with const byte
 *
 * @s: area to be filled by memory
 *
 * @b: char to copy
 *
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for a array
 *
 * @nmemb: number of elements in array
 *
 * @size: size of each element
 *
 * Return: p to be allocated the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);

	return (p);
}
