#include <stdio.h>
/**
 * main - prints size of various comp types
 * Return 0 (success)
 */
int main(void)
{
	char c;
	int i;
	float r;
	long int y;
	long long int z;
printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of int is: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(r));
printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of long long int is: %lu byte(s)\n", (unsigned long)sizeof(z));
return (0);
}
