#include <stdio.h>

/**
 * main - a function to print it's name
 * @argc: integer
 * @*argv[]: array of argc
 * Return: no return
 */

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
