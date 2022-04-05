#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, a, b;
	char *str;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
		continue;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		continue;
	str = malloc(len1 + len2 + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < len1)
	{
		str[i] = s1[i];
	}
	j = 0;

	while (i < (len1 + len2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
