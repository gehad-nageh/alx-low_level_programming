#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: input int
 * @argv: input char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char i;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
