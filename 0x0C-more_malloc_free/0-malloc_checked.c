#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

