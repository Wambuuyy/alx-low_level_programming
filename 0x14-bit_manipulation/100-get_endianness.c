#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int value = 1;
	char *ptr = (char *)&value;

	/* If the first byte is 1, it's little endian; otherwise, it's big endian. */
	if (*ptr == 1)
		return (1); /* Little endian */
	else
		return (0); /* Big endian */
}
