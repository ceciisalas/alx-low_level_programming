#include "main.h"

/**
 * main - prints my _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	while (name[i])
	{
		_putchar(name[i]);
		i++;
	}
	return (0);
}
