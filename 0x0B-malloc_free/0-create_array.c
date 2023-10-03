#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array - a function to create an array of char
 * @size: it is the size of the array
 * @c: char to initialize
 * Return: poiter of null of it failed
 */

char *create_array(unsigned int size, char c)
{
	char *buffer  = (char *) malloc(size * sizeof(c));

	if (size == 0 || buffer  == 0)
		return (0);

	while (size--)
		buffer[size] = c;

	return (buffer);
}
