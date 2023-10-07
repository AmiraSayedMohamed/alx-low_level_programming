#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a functin that concatednates two string
 * @s1: string1
 * @s2: string2
 * @n: index
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	int i, j, strlen_1, strlen_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*get the length of the two string */
	for (strlen_1 = 0; s1[strlen_1] != '\0'; strlen_1++)
		;
	for (strlen_2 = 0; s2[strlen_2] != '\0'; strlen_2++)
		;
	m = malloc(strlen_1 + n + 1);
	if (m == NULL)
		return (NULL);
	/* copy first string into str */
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	/* copy second string into str */
	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}

	m[i] = '\0';
	return (m);

}
