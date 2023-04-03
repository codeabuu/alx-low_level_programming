#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	const char *p_src = src;

	for (; n > 0; --n, ++p_dest, ++p_src)
	{
	*p_dest = *p_src;
	}
	return (dest);
}
