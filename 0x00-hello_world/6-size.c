#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of float: %f bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of a long int: %d bytes\n" sizeof(long int));
	printf("Size of long long int: %d bytes\n" sizeof(long long int));
	return (0);
}
