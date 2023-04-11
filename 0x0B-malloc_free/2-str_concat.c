#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - get ends of the input and add for size
 * @s1: input one to conc
 * @s2: input two to conc
 * Return: conc s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int i, vi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = vi = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[vi] != '\0')
		vi++;
	conct = (char *)malloc(sizeof(char) * (i + vi + 1));

	if (conct == NULL)
		return (NULL);
	i = vi = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[vi] != '\0')
	{
		conct[i] = s2[vi];
		i++, vi++;
	}
	conct[i] = '\0';
	return (conct);
}
