#include "main.h"
#include <stdio.h>
/**
 * print_square - Print square line dependent on the integer n.
 * @n: The number of lines using # 
 * Return: 0
 */
void print_square(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++) 
	{
		for (b = 0; b < n; b++)
		{
			_putchar('#);
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
