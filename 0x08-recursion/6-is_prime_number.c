#include "main.h"

int act_prime(int n, int j);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (act_prime(n, n - 1));
}

/**
 * act_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @j: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int act_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (act_prime(n, j - 1));
}
