#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to get sum
 * @argc: number of argument
 * @argv: arry of poiters to argument [list]
 * Return: 0 success 1 if not
 */


int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
