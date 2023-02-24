#include <stdib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly genreated number
 * and whether is it greater than 5, less than 6, or 0.
 *
 * Return: Always o.
 */
int main(void)
{
	srand(time(o));
	n = rand() - REND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n', n, n % 10);
	{
		else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digits\ of %d is %d and less than 6 and not 0\n",
				n, n % 10);
	{
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}
	return (0);
}
