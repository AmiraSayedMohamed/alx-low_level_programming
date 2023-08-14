#include <stdio.h>


/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
	int hundreds_digit, tens_digit, ones_digit;

	for (hundreds_digit = 0; hundreds_digit <= 7; hundreds_digit++)
	{
		for (tens_digit = hundreds_digit + 1; tens_digit <= 8; tens_digit++)
		{
			for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
			{
				putchar('0' + hundreds_digit);
				putchar('0' + tens_digit);
				putchar('0' + ones_digit);

				if (hundreds_digit < 7 || tens_digit < 8 || ones_digit < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
