#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 *
 * @c: Digit.
 *
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int digit = c % 10;

	if (c < 10)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
