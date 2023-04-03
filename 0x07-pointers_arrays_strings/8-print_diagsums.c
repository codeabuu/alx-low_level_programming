#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sumof1, sumof2, x;

	sumof1 = 0;
	sumof2 = 0;

	for (x = 0; x < size; x++)
	{
		sumof1 = sumof1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sumof2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sumof1, sumof2);
}
