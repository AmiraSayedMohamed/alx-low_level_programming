#include "main.h"
#include <stdbool.h>


/**
 * wildcmp - Compares two strings with wildcard support
 * @s1: First string
 * @s2: Second string with wildcards (*).
 * Return: 1 if strings can be considered identical , 0 otherwose
 */

int wildcmp(char *s1, char *s2)
{
	/*if both strings are empty, they are identical*/
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && s2[1] == '\0')))
		return (1);
	/*if s2 is a "*", it can replace my string (including an empty string)*/
	if (*s2 == '*')
		/*Recursively try matching s1 with s2 excluding the "*", or advancing s1*/
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);

}
