#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins to
 * give change for an amount of money
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 is Success, 1 is Error
 */
int main(int argc, char *argv[])
{
	int num, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (k = 0; k < 5 && num >= 0; k++)
	{
		while (num >= coins[k])
		{
			result++;
			num -= coins[k];
		}
	}

	printf("%d\n", result);
	return (0);
}
