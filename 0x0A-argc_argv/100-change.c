#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coin
 * @argc: int
 * @argv: list
 * Return: 0 success 1 not
 */


int main(int argc, char *argv[])
{
	int money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);

	}
	if (argc == 2)
	{
		int i, leastcents = 0;
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5 && money > 0; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
