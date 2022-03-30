#include "main.h"
/**
 * int factorial - Factorial of a given numer
 * @n: integer
 *
 * Return: Always 0 
 */
int factorial(int n)
{
	if (n == 0)
	{
		n = 1;
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
