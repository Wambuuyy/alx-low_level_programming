#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long l = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld, ", l);
		}
		else if (i == 1)
		{
			printf("%ld, ", k);
		}
		else
		{
			k = k + l;
			l = k - l;
			printf("%ld", k);
		}
		i++;
	}
	printf("\n");
	return (0);
}
