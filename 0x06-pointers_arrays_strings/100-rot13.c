#include "main.h"
#include <stdio.h

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Returns: *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char data1 [] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcde
fghijklmnopqrstuvwxyz";
	char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyz";

	for (a = 0; S[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == data1 [b])
			{
					s[a] = datarot[b];
					break;
				}
			}
		}
		return (s);
	}
}
