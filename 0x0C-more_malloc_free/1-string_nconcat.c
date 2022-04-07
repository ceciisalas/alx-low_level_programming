#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenate string
 * @s1: string1
 * @s2: string2
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, size2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	for (s1[size1] = 0; s1[size1] != '\0'; size1++)
		for (s2[size2] = 0; s2[size2] !=  '\0'; size2++)

			if (n >= size2)
				n = size2;
	p = malloc(sizeof(char) * n + size1 + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (i = 0; i < n i++)
		p[i + size1] = s2[i];
	p[i + size1] = '\0';

	return (p);
}
