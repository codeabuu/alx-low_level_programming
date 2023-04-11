#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an  array of size and assign char c
 * @size: size of the array
 * @c: char
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if it fails
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = (char *) malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
