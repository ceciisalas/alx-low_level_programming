#include "main.h"
/**
 * *leet - Encodes a string into 1337
 * @str: string to encode
 *
 * Return: Always 0
 */
char *leet(char *str)
{
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";
	int i, j = 0;

	while (str[i] != '\0')
	{
		while (c[j] != '\0')
		{
			if (str[i] == c[j])
			{
				str[i] == n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
