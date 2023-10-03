#include <stdio.h>

/**
 * main - print number of arguments passsed
 * @argc: integer
 * @argv: pointer to an array of command line
 * Return: 0 success 1 if not
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
