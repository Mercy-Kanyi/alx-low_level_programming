#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to function to be used
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int t;
    if(array == NULL || action == NULL)
        return;
    for(t = 0; t < size; t++)
        action(array[t]);
}
