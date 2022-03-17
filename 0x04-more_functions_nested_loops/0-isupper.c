#include "main.h"
/**
 * _isupper - Check if parameter c represents an uppercase letter.
 *
 * @c: Int as a character.
 *
 * Return: 1 if uppercase, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
