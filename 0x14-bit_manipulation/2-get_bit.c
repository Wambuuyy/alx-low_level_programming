#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get (0 is the least significant bit).
 *
 * Return: The value of the bit at the given
 * index (1 or 0) or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Error: Index out of range */

	mask = 1UL << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
