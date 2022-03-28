#include "main.h"
/**
 * *_strchr - Locates character in a string
 * @s: string
 * @c: character
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	size_t = 0;

	while (s[i])
	{
		if (s[i] == 0)
		{
			c = &s[i];
			return (c);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (0);
}
