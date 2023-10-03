#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function  that returns a pointer to a newly allocated space
 * @str: string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *n;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	n = (char *)malloc(size * sizeof(*str) + 1);

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (n);
}
