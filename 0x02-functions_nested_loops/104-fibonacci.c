#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int count = 2;
	unsigned long long first = 1;
	unsigned long long second = 2;

	printf("%llu, %llu", first, second);
	while (count < 98)
	{
		unsigned long long next_term = first + second;

		printf(", %llu", next_term);
		first = second;
		second = next_term;

		count++;
	}
	printf("\n");
	return (0);
}
