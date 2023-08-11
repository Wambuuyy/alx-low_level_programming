#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible different combinations of three digits.
 * Return: Always 0 (success)
 */
int main(void)
{
	int hundreds, tens, ones;

	for (hundreds = 0; hundreds <= 7; hundreds++)
	{
		for (tens = hundreds + 1; tens <= 8; tens++)
		{
			for (ones = tens + 1; ones <= 9; ones++)
			{
				putchar('0' + hundreds);
				putchar('0' + tens);
				putchar('0' + ones);
				if (!(hundreds == 7 && tens == 8 && ones == 9))
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
