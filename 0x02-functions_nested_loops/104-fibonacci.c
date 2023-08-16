#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int count = 2;
	int first = 1;
	int second = 2;

	printf("%d, %d", first, second);
	while (count < 98)
	{
		int next_term = first + second;

		printf(", %d", next_term);
		first = second;
		second = next_term;

		count++;
	}
	printf("\n");
	return (0);
}
