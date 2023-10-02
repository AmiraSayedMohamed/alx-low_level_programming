#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 *
 * @dest: pointer to a destination input
 * @src: pointer to a source input
 * @n: most number of bytes form @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;

	while (dest[c1])
		c1++;

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
		dest[c1 + c2] = src[c2];

	dest[c1 + c2] = '\0';

	return (dest);
}
