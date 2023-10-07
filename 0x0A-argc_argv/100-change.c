#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of coins
 * @argc: input int
 * @argv: input char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, l = 0, budget = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1}

	for (i = 0; i < 5; i++)
	{
		if (money >= c[i])
		{
			l += budget / c[i];
			budget = budget % c[i];
			if (budget % c[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
