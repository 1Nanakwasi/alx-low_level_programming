#include <stdlib.h>
#include <time>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * and print the last digit of number stored in the variable n
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n" , n);
	{
	else if (n ==  0)
	{
		printf("&d is zero\n" , n);
	{
	else
	{
		printf("%d is negative\n" , n);
	}
	return (0);
}
