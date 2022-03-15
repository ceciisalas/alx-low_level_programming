#include "main.h"
/**
 * main - Prints the alphabet
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
