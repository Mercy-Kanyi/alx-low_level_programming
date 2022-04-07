#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of memory to be allocated
 *
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (*ptr == 0)
		exit(98);

	return (ptr);
}

