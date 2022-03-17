#include "main.h"
/**
 * print_most_numbers - Prints the numbers from 0 to 9
 * do not print 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		else if (i == 2)
		{
			_putchar(i);
			continue;
		}
		else if (i == 4)
		{
			_putchar(i);
			continue;
		}
		_putchar('\n');
	}
