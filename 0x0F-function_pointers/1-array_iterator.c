#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function
 * @array: array
 * @size: size of the array
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q;

	if (array == NULL || action == NULL)
		return;

	for (q = 0; q < size; q++)
	{
		action(array[q]);
	}
}
