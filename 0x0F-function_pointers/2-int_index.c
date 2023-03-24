#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int q;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (q = 0; q < size; q++)
	{
		if (cmp(array[q]))
			return (q);
	}
	return (-1);
}
