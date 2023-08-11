#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the lower case alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;
	int l = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (l <= 102)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
