#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function creates an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer to the newly created array
 */


int *array_range(int min, int max)
{
	int *m, i = 0, t = min;

	if (min > max)
		return (NULL);
	m = malloc((max - min + 1) * sizeof(int));
	if (m == NULL)
		return (NULL);
	while (i <= max - min)
		m[i++] = t++;
	return (m);
}
