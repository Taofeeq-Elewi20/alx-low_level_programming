#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes function on each element of array
 * @array: the array
 * @size: the size of array
 * @action: function to perform on each element of an array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
