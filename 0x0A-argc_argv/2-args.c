#include <stdio.h>

/**
 * main - a function that prints the number of argument passed to the program
 * @argc: int
 * @argv: list
 * Return: 0 Success 1 not
 */


int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
