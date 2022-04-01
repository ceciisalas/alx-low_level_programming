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
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
