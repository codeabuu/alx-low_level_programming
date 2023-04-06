#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: where the memory is stored
 *@src: memory where is copied.
 *@n: number of bytes
 *
 *Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int f = n;


	for (j = 0; j < f; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
