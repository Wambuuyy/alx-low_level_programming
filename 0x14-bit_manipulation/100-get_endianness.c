#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int val = 1;
	char *pointer = (char *)&val;

	/* If the first byte is 1, it's little endian; otherwise, it's big endian. */
	if (*pointer == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
