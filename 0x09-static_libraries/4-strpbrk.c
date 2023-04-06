#include "main.h"
/**
 * _strpbrk - func entry point
 * @s: input1
 * @accept: input2
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int p;


	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
		if (*s == accept[p])
		return (s);
		}
	s++;
	}


return ('\0');
}
