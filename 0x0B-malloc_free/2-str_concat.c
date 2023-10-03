#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *str_concat - a function concatenate two string
 * @s1: string
 * @s2: string
 * Return: a pointer point to a newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;

	if (s1 == '\0')
		s1 = NULL;
	if (s2 == '\0')
		s2 = NULL;

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	char *n = (chari *)malloc((size1 + size2) * sizeof(char) + 1);

	if (n == 0)
		return (0);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(m + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(m + i) = *(s2 + j);
		i++;
	}
	return (m);
}

/**
 * _strlen - function to get length
 * @s: string
 * Return: pointer points to the allocated memory space
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
