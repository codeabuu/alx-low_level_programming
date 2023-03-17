#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int k, l;

	for (k = 48; k <= 56; k++)
	{
		for (l = 49; l <= 57; l++)
		{
			if (l > k)
			{
				putchar(l);
				putchar(k);
				if (k != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
