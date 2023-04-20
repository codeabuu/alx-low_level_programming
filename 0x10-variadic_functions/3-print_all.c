#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	char *str, *sep = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(lst, double));
					break;
				case 's':
					str = va_arg(lst, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(lst);
}
