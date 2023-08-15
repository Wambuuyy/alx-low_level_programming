#include "main.h"
/**
 * print_last_digit - Prints a number's last digit
 * @n: input number as integer
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
