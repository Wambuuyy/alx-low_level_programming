#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 * Return: nothing
 */
void print_times_table(int n)
{
	int num, mult, prt;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prt = num * mult;
				if (prt <= 99)
				{
					_putchar(' ');
				}
				if (prt <= 9)
				{
					_putchar(' ');
				}
				if (prt >= 100)
				{
					_putchar((prt / 100) + '0');
					_putchar(((prt / 10) % 10) + '0');
				}
				else if (prt <= 99 && prt >= 10)
				{
					_putchar((prt / 10) + '0');
				}
				_putchar((prt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
