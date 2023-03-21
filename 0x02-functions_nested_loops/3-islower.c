#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * Return: Always 0(Success)
 * @c: is the char to be checked
 */
	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
