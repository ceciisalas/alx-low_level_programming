#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints number of arguments
 * @argc: number of command line arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);
	return (0);
}
