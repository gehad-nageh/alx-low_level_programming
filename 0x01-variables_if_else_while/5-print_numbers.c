#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrption: A C program that prints with print function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
