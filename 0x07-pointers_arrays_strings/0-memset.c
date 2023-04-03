#include "main.h"
/**
 * _memset - set a block of memory with a specific value
 * @s: a pointer to the memory block to fill
 * @b: value to be set
 * @n: number of bytes to be set to a value
 *
 * Return: return new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int f;

	for (f = 0; n > 0; f++)
	{
		s[f] = b;
		f--;
	}
	return (s);
}
