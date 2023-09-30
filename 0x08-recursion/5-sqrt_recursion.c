#include "main.h"

/**
 * _sqrt_recursion - is a function that finds the square root
 *
 * @n: is the number that we want to get square root of it
 *
 * Return: integer the square root
 */

int _sqrt_recursion(int n)
{
	return (squareRoot(n, 1));
}

/**
 * squareRoot - is a function that find the square root
 * @n: int to find the square root
 * @val: is a number that i will increment it untill i get the square root
 * Return: int
 */

int squareRoot(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (squareRoot(n, val + 1));
	else
		return (-1);
}
