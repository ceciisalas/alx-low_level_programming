#include "main.h"
/**
 * print_rev - Print a string, in reverse
 * @s: string
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int a, b;
	char *start, *end, temp;

	a = string_length(s);

	start = s;
	end = s;

	for (b = 0; b < a - 1; b++)
		end++
			for (b = 0; b < a / 2; b++)
			{
				temp = *end;
				*end = *start;
				*start = temp;

				start++;
				end--;
			}
	_putchar('\n');
}
