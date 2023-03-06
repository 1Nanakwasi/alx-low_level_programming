#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int t = n;

	for (; p < t; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}

