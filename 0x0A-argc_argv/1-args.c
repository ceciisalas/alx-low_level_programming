#include <stdio.h>
/**
 * main - Prints the number of arguments passes into it
 * @argc: number of arguments
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);
	return (0);
}
