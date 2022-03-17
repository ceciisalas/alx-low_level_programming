#include "main.h"
#include <stdio.h>
/**
 * _isupper - Check if parameter c represents an uppercase letter.
 *
 * @c: Int as a character.
 *
 * Return: 1 if uppercase, otherwise return 0
 */
int _isupper(int c)
{
	if (c >= 'C' && c <= 'c')
	{
		return (1);
	}
	return (0);
}
