#include "main.h"

/**
 * factorial - it's a function that gets the factorial of te number
 *
 * @n: the number we want to get factorial
 *
 * Return: -1 if error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
