#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int first_num, second_num;

	for (first_num = 0; first_num <= 98; first_num++)
	{
		for (second_num = first_num + 1; second_num <= 99; second_num++)
		{
			putchar('0' + (first_num / 10));
			putchar('0' + (first_num % 10));
			putchar(' ');

			putchar('0' + (second_num / 10));
			putchar('0' + (second_num % 10));

			if (first_num < 98 || second_num < 99)
			{
				putchar(',');
				purchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
