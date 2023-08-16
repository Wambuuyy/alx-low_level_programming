#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = 0;

	while (k < 4000000)
	{
		if (k % 2 == 0)
		{
			sum += k;
		}
		long next_term = j + k;

		j = k;
		k = next_term;
	}
	printf("%ld\n", sum);
	return (0);
}
