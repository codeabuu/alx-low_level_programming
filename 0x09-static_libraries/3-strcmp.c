#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: the input value
 * @s2: the input value
 *
 * Return: s1[r] - s2[r]
 */
int _strcmp(char *s1, char *s2)
{
	int r;


	r = 0;
	while (s1[r] != '\0' && s2[r] != '\0')
	{
		if (s1[r] != s2[r])
		{
			return (s1[r] - s2[r]);
		}
	r++;
	}
	return (0);
}
