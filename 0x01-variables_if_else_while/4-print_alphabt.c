#include <stdio.h>
/**
 * main - Print all letter except q and e.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);

		}
		else
		{
		}
	}
	putchar("\n");
	return (0);
}
		
