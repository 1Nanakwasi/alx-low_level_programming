#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)		
{
	int **aac;
	int a, b;

	if (width <= 0 || height <= 0)		
		return (NULL);

	aac = malloc(sizeof(int *) * height);		
	if (aac == NULL)
		return (NULL);
		
	for (a = 0; a < height; a++)
	{
		aac[a] = malloc(sizeof(int) * width);
		if (aac[a] == NULL)
		{
			for (; a >= 0; a--)
				free(aac[a]);
			free(aac);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)	
	{
		for (b = 0; b < width; b++)
			aac[a][b] = 0;	
	}

	return (aac);		
}
