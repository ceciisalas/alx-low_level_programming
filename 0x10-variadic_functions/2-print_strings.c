#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print a string
 * @separator: string
 * @n: number of strings
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringA;
	char *str;

	va_start(stringA, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(stringA, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	va_end(stringA);
	printf("\n);
}
