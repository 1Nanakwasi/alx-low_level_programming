#include "main.h"
#include <stdio.h

/**
 * rot13 - a function that encodes a string using rot13
 * @s: pointer to string params
 *
 * Returns: str
 */

char *rot13(char *str)
{
	int indx1 = 0, index2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F', 
'G','H', 'I', 'J', 'K', 'L', 'M', 'N','O','P', 
'Q', 'R', 'S', 'T', 'U', 'V', 'X', 'Y'. 'Z'};
	char alphabet[52] = {'a', 'b', 'c', 'd', 'e', 'f',
'g','h', 'i', 'j', 'k', lL', 'm', 'n','o','p', 
'q', 'r', 's', 't', 'u', 'v', 'x', 'y'. 'z'};

	while (str[indx1])
	{
		for (index2 = 0; indx2 < 52; indx2++)
		{
			if (str[index1] == alphabet[indx2])
			{
				(str[index1] == rot13key[indx2]);
				break;
			}
		}
		indx1++;
	}

	return (str);
}
