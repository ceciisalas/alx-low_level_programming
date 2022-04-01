#include <stdio.h>
#include <stdlib.h>
/**
 * main - Add all positive numbers
 * @argc: argument count
 * @argv: array argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			res += atoi(argv[i]);
		}
	}
	printf("%d\n", res);
	return (0);
}
