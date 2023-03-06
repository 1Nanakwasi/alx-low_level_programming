#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum3, sum2, w;

	sum3 = 0;
	sum2 = 0;

	for (w = 0; w < size; w++)
	{
		sum3 = sum3 + a[w * size + w];
	}

	for (w = size - 1; w >= 0; w--)
	{
		sum2 += a[w * size + (size - w - 1)];
	}

	printf("%d, %d\n", sum3, sum2);
}
