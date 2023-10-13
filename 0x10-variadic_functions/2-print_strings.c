#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings followed be a new line
 * @separator: is the string to be printed between the strings
 * @n: number  of strings passed to the function
 * Return: nothing
 */

void print_Strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;
	char *string;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		string = va_arg(list, char*);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (j < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);

}
