#include <stdio.h>		
#include <stdlib.h>
#include "main.h"
		
/**
 * _strdup - a function that returns a pointer
 * @str:
 * @char:
 * Return: 0	
 */

char *_strdup(char *str)	
{
	char *qqq;	
	int a, b = 0;

	if (str == NULL)		
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	qqq = malloc(sizeof(char) * (a + 1));
		
	if (qqq == NULL)
		return (NULL);
		
	for (b = 0; str[b]; b++)
		qqq[b] = str[b];
		
	return (qqq);	
}
