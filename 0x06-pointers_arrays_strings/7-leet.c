#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: input value
 *
 * Return: N value
 */

char *leet(char *n)
{
	int p;
	int k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[p] == s1[k])
			{
				n[p] = s2[k];
			}
		}
	}
	return (n);
}
