#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet x 10.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char az = 'a';

	for (i = 0; i < 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
