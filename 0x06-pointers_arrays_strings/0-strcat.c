#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * This function appends the src string to the dest string
 * overwriting the terminating null
 * @dest: input value
 * @src: input value
 *
 * Return:
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
