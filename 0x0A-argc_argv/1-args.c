#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: number of arguments count
 * @argv: array of arguments vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*thisignores argv*/
	printf("%d\n", argc - 1);

	return (0);
}

