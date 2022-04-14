#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string
 * @n: number of string
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int s;
	char *stringA;

	va_start(strings, n);

	for (s = 0; s < n; s++)
	{
		stringA = va_arg(strings, char*);
		if (stringA != NULL)
			printf("%s", stringA);
		else
			printf("%p", stringA);
		if (separator != NULL && s < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
