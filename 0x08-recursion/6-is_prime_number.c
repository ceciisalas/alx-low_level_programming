#include "main.h"
/**
 * isPrime - Prime number
 * @n: integer
 * @j: integer
 *
 * Return: 1
 */
int isPrime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (is_prime(i, j - 1));
}

/**
 * is_prime_number - print prime numbers
 * @n: integer
 *
 * Return: Always 0
 */
int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (is_prime(n, n - 1));
}
