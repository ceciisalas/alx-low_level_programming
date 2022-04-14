#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Return the sum of all its parameters
 * @n: unsigned integer
 * Return: 0 or Sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumVA;
	unsigned int i;
	int sum = 0;

	va_start(sumVA, n);

	if (n)
	{
		va_start(sumVA, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(sumVA, int);
		}
		va_end(sumVA);
	}
	return (sum);
}
