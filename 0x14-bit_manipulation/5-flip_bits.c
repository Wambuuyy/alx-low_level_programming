#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _xor = n ^ m;
	unsigned int count = 0;

	while (_xor > 0)
	{
		count += _xor & 1;
		_xor >>= 1;
	}
	return (count);
}
