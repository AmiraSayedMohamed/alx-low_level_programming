#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a functions that returns the sum of all its parameter
 * @n: the number of arguments
 * Return: sum of its argument
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int j;
	int sum_list = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (j = 0; j < n; j++)
		sum_list += va_arg(list, int);

	va_end(list);

	return (sum_list);
}
