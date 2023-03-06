#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
		int e;

		while (*s)
		{
			for (e = 0; accept[e]; e++)
			{
			if (*s == accept[e])
			return (s);
			}
		s++;
		}

	return ('\0');
}
