#include "main.h"
/**
 * print_chessboard - Print the chessboard
 * @a: char
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8;)
	{
		while (j < 8)
		{
			_putchar(*(*(i + a) + j));
			j++;
		}
		i++;
	}
	_putchar('\n');
}
