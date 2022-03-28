#include "main.h"
/**
 * *_strstr - Locales a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: A pointer of the beginning of the located substring or
 * null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
