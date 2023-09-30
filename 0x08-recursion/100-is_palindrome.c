#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - a function checks if the reverse string = original
 * @s: string
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}

/**
 * is_palindrome_recursive - a function to get palindrome
 * @s: string
 * @start:  integer
 * @end: start
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
