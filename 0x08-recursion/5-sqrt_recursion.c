#include "main.h"
/**
 * _sqrt_recursion - Natural square root of a number
 * @n: integer
 *
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt recursion
 * @n: integer
 * @i: integer
 *
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, 1 + 1));
}
