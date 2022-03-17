#include "main.h"
#include <stdio.h>
/**
 * main - Fizz buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (((i % 5) == 0) && (i % 3 == 0))
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf("\n");
		return (0);
	}
