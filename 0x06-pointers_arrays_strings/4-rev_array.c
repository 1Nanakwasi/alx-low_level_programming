#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: array
 * @n: Where n is the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}
