#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = 2;

	while (k + j < 4000000)
	{
		k = k + j;
		if (k % 2 == 0)
		{
			sum += k;
			j = k - j;
		}
		i++;
	}
	printf("%ld\n", sum);
	return (0);
}