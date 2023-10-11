#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that excutes a function given as a parameter on each element of an array
 * @array: int
 * @size: size of the array
 * @action: a pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
