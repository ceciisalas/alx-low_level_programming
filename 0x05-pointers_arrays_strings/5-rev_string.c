#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0, str, k;
	char j;

	while (s[i] != '\0')
		i++;
	i--;
	str = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		j = s[i];
		s[str] = j;
		i++;
		str;
	}
}
