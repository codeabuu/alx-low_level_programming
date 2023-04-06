#include "main.h"
/**
 * _strchr - The Entry point
 * @s: the input
 * @c: the input
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int g;


	for (g = 0; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
