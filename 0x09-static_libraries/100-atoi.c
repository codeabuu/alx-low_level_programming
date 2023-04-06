#include "main.h"
/**
 * _atoi - converts a string into an integer.
 *
 * @s: the string to be used.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1, f = 0;
	unsigned int res = 0;


	while (!(s[f] <= '9' && s[f] >= '0') && s[f] != '\0')
	{
		if (s[f] == '-')
			sign *= -1;
		f++;
	}
	while (s[f] <= '9' && (s[f] >= '0' && s[f] != '\0'))
	{
		res = (res * 10) + (s[f] - '0');
		f++;
	}
	res *= sign;
	return (res);
}
