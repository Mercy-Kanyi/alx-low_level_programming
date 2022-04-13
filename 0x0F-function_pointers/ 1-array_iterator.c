#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of functions
 * @size: size of the array
 * @action: pointer of function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int t;

if (array == NULL || action == NULL)
    return;
for(t = 0; t < size; t++)
    action(array[t]);
}