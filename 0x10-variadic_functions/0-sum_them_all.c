#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - sum given inputs
 * @n: parameters
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sumVA;
	unsigned int sum = 0;
	unsigned int i;

	va_start(sumVA, n);

	for (i = 0; i < n; i++)
	{
		int n = va_arg(sumVA, unsigned int);

		sum += n;
	}
	va_end(sumVA);
	return (sum);
}
