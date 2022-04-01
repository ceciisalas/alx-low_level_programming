#include "main.h"
#include <stdio.h>
/**
 * main - Print the name of the program
 * @argc: Comandline arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
