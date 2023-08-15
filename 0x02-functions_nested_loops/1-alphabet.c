#include "main.h"
/**
 * main - Entry point
 * Description: Prints the lowercase alphabet
 * Return: Always 0
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
