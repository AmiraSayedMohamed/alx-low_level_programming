#include "main.h"

/**
 * is_prime_number - is a function that checks if the number i sprime or not
 * @n: integer
 * Return: 1 if it is prime and 0 if it's not
 */

int is_prime_number(int n)
{
	return (isPrimeRecursive(n, n - 1));
}

/**
 * isPrimeRecursive - a function checks primality
 * @n: the number we want to check
 * @divisor: we will use this divisor to iterate through all number
 *
 * Return: 0 if not prime  1 if prime
 */

int isPrimeRecursive(int n, int divisor)
{
/*Base case: if n is less than 2, it's not prime*/
	if (n < 2)
		return (0);
	if (n % divisor == 0)
		return (0);
	if (divisor == 2)
		return (1);

	return (isPrimeRecursive(n, divisor - 1));

}
