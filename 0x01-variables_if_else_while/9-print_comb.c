#include <stdio.h>
/**
 * main - combine nos
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z;

	for (z = 38; z < 48; z++)
	{
		putchar(z);
		if (z != 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar("\n");
	return (0);
}
