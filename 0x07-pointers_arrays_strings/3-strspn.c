#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	const char *p_s = s;
	const char *p_accept;
	unsigned int n;

	for (n = 0; *p_s; ++p_s)
	{
		for (p_accept = accept; *p_accept; ++p_accept)
		{
			if (*p_s == *p_accept)
			{
				++n;
				break;
			}
		}
	if (!*p_accept)
	{
		break;
	}
	}
	return (n);
}
