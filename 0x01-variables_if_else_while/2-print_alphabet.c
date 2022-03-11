#include <stdio.h>
/**
 * main - Alphabet in Lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		putchar("%c ", az);
		az++;
	}
	putchar('\n');
	return (0);
}
