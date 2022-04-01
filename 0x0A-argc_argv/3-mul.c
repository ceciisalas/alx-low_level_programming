#include <stdio.h>
/**
 * main - Multiplies two numbers
 * @argc: number of arguments
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, num_one, num_two, product;

	if (argc != 3)
	{
		return (printf("Error\n"), 1);
	}
	for (i = 0; i < argc; i++)
	{
		num_one = atoi(argc[1]);
		num_two = atoi(argv[2]);
	}
	product = num_one * num_two;
	printf("%d\n", product);
	return (0);
}
