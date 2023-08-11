#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all digits with base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
