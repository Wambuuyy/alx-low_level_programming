#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int count = 0;
	int first = 1, second = 2;

	while (count < 98)
	{
		if (count == 0)
			printf("%d", first);
		else if (count == 1)
			printf(", %d", second);
		else
		{
			int next_term = first + second;
			if (next_term < first)
			{
				printf("\nOverflow occurred at %d terms.\n", count + 1);
				break;
			}
			printf(", %d", next_term);
			first = second;
			second = next_term;
		}

		count++;
	}

	printf("\n");
	return (0);
}
