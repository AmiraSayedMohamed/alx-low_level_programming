#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  function prints anything
 * @format: a list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int k, l, m = 0;
	char *string;
	const char type_argument[] = "cifs";

	va_start(list, format);
	while (format && format[k])
	{
		l = 0;
		while (type_argument[l])
		{
			if (format[k] == type_argument[l] && m)
			{
				printf(", ");
				break;
			} l++;
		}
		switch (format[k])
		{
			case 'i':
				printf("%d", va_arg(list, int)), m = 1;
				break;
			case 'c':
				printf("%c", va_arg(list, int)), m = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), m = 1;
				break;
			case 's':
				string = va_arg(list, char*), m = 1;
					if (!string)
					{
						printf("(nil)");
						break;
					}
				printf("%s", string);
				break;
		} k++;
	}
	printf("\n"), va_end(list);
}
