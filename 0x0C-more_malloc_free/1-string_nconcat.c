#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, size2;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (s1[size1] = 0; s1[size1] != '\0' size1++)
	{
		for (s2[size2] = 0; s2[size2] != '\0' size2++)
	}
	if (n >= size2)
		n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (; i = 0; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

	return (p);
}
