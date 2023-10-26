#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to the binary string.
 *
 * Return: The converted number,
 * or 0 if there are invalid characters or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv  = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		conv = (conv << 1) + (*b - '0');
		b++;
	}
	return (conv);
}
