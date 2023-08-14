#include <stdio.h>


/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (int i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
