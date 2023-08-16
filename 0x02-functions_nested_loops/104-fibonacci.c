#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int a = 0, b = 1, next;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 96; i++)
	{
		next = a + b;
		a = b;
		b = next;

		printf(", %lu", next);
	}
	printf("\n");
	return (0);
}
