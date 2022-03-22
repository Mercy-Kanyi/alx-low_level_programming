#include "main.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: an input interger pointer
 * @b: an input interger pointer
 * Return: zero
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

