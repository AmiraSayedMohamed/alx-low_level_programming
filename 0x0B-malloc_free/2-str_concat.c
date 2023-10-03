#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function to find the length of the string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * str_concat - concatenate two string
 * @s1: string
 * @s2: string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	n = (char *) malloc((size1 + size2) * sizeof(char) + 1);

	if (n == 0)
		return (0);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(n + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(n + i) = *(s2 + j);
		i++;
	}
	return (n);
}
