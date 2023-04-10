#include "main.h"

/**
 * get_endianness - a function that checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *a = (char *) &q;

	return (*a);
}
