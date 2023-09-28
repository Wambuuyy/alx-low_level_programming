#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Description: This function prints the binary representation of an
 * unsigned long integer without using arrays, malloc, %, or / operators.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int str = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			str = 1;
		}
		else if (str)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
