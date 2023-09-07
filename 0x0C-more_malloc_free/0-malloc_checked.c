#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @size: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int size)
{
	void *memory_block;

	memory_block = malloc(size);

	if (memory_block == NULL)
		exit(98);

	return (memory_block);
}
