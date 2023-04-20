#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all the paramters.
 * @n: is the number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int j, sum = 0;

	va_start(par, n);

	for (j = 0; j < n; j++)
		sum += va_arg(par, int);

	va_end(par);

	return (sum);
}
