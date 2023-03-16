#include <stdio.h>
/**
 * main - a program that prints size of various inputs
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int d;
	long long int g;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
fprintf(stderr, "[Anything]\n");
return (0);
}
