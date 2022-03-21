#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int str, a, len;
	char temp;

	for (str = 0; s[str] != '\0'; str++)
	;
	a = 0;
	len = str / 2;

	while (len--)
	{
		temp = s[str - a - 1];
		s[str - i - 1] = s[a];
		s[a] = temp;
		a++;
	}
}
