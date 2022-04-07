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
	unsigned int size1, size2, i;

	if (s1 == NULL)
		size1 = 0;
	for (size1 = 0; s1[size1]; ++size1)
		;
	if (s2 == NULL)
		size2 = 0;
	for (size2 = 0; s2[size2]; ++size2)
		;
	if (size2 > n)
		size2 = n;
	p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (i = 0; i size2; i++)
		p[size1 + i] = s2[i];
	p[size1 + size2] = '\0';
	return (p);
