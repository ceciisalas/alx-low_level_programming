#include "main.h"
/**
 * *_strchr - Locates a character.
 * @s: string
 * @c: character
 *
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0' && *s != c; ++s)
		;
	return (*s == c ? (char *) s : NULL);
}
