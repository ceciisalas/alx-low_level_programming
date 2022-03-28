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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
