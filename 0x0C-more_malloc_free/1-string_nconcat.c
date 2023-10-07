#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concate two string
 * @s1: string
 * @s2: string
 * @n: index
 * Return: pointer
 */




char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
		size2++;

	if (n > size2)
		n = size2;
	m = malloc((size1 + n + 1) * sizeof(char));

	if (m == NULL)
		return (0);

	for (i = 0; i < size1; i++)
		m[i] = s1[i];
	for ( ; i < (size1 + n); i++)
		m[i] = s2[i - size1];
	m[i] = '\0';
	return (m);
}
