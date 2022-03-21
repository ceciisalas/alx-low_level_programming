#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length;
	char array[4] = "hola";

	length = strlen(array);
	_putchar("\string length  = %d \n", length);
	return (0);
}
