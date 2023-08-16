#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, next;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
		next =( a + b) % 10000000000000000UL;
		a = b;
		b = next;

		printf(", %lu", next);
	}
	printf("\n");
	return (0);
}
