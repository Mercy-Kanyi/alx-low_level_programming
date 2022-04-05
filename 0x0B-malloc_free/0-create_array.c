#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the m with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int z;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(char) * size);

	if (m == 0)
		return (NULL);

	for (z = 0; z < size; z++)
		m[z] = c;

	return (m);
}

