#include "main.h"
/**
 * times_table - Prints the 9 times tables.
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, multiply;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			multiply = i * j;
			_putchar(',');
			_putchar(' ');
			if (multiply >= 10)
			{
				_putchar(multiply / 10 + 48);
				_putchar(multiply % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(multiply + 48);
			}
		}
		putchar('\n');
	}
}
