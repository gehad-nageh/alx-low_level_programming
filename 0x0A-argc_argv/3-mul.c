#include <stdio.h>
#include <stdlib.h>

/**
 * main - function print the sum of 2 number
 * @argc: input int
 * @argv: input char
 * Return:0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Eroor\n");
		return (1);
	}
	return (0);
}
