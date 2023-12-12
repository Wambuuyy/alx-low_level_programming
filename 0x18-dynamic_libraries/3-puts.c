#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line
 *
 * @str: The string to be printed
 *
 * Description:
 * This function takes a pointer to a string and
 * iterates through each character
 * in the string, printing them to the standard
 * output using the _putchar function.
 * After printing the entire string,
 * it adds a newline character '\n' to ensure
 * the output ends with a line break.
 *
 * Return: Always void.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
