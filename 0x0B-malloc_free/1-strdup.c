#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - allocates space in memory
 * @str: string
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int len = 0;

	s = malloc(sizeof(char) * (len + 1));
	if (str == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] i++)
	{
		s[i] = str[i];
		len++;
	}
	s[len] = '\0';
	return (s);
}
