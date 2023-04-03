#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *s = haystack;
	char *p = needle;

	while (*p != '\0' && *s == *p)
	{
	s++;
	p++;
	}

	if (*p == '\0')
	return (haystack);

	haystack++;
	}

	return (0);
}
