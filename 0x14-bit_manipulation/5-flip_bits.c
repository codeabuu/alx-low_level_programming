#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 63;
int count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

while (i >= 0)
{
current = exclusive >> i;
if (current & 1)
	{
count++;
}

i--;
}

return (count);
}

