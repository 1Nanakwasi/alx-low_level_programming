#include "main.h"

int actual_prime(int an, int ai);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int an)
{
	if (an <= 1)
		return (0);
	return (actual_prime(an, an - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int an, int ai)
{
	if (ai == 1)
		return (1);
	if (an % ai == 0 && ai > 0)
		return (0);
	return (actual_prime(an, ai - 1));
}

