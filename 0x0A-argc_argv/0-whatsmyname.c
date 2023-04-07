#include <stdio.h>
#include "main.h"

/**
 * main - will prints the name of the program
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
