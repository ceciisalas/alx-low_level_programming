#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	char *a = s;
	char str[100];
	short b = 0;

	while (*s != '\0')
	{
		str[b] = *s;
		s++;
		b++;
	}
	b = 0;

	while (s > a)
	{
		s--;
		*s = str[b];
		b++;
	}
}
