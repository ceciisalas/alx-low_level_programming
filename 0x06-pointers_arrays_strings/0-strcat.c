#include "main.h"
/**
 * *_strcat - Concatenates two strings
 * @dest: string
 * @src: string 
 *
 * Return: 1 or 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 1;

	while (dest[i] != '\0')
	{
		++dest;
		i++;
	}
	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
