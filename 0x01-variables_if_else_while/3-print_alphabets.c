#include <stdio.h>
/**
 * main - Entry point
 * Description: prints both cases of alphabet
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = 97;
	int c = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
