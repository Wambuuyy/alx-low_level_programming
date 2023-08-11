#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all possible combinations of single numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(44);
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
