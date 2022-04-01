#include "main.h"
/**
 * *_memcpy - Copies memory area.
 * @dest: destination area
 * @src: copies memory area
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
