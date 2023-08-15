#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		int n = 97;

		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		count++;
	}
}
