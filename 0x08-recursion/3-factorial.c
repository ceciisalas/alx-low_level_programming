#include "main.h"
/**
 * factorial - Factorial of a given number
 * @n: integer
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		n = -1;
	}
	else if (n <= 1)
	{
		n = 1;
	}
	return (n * factorial(n - 1));
}
