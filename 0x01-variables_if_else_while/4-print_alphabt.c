#include <stdio.h>
/**
 * main - lowerscase except q,e.
 *
 * Return: Always 0 (Succesful)
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int j;

	for (j = 0; j < 24; j++)
	{
		putchar(alp[j]);
	}
	putchar("\n");
	return (0);
}
