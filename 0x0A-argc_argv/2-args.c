#include <stdio.h>

/**
 * main - function that print the num of argument
 * @argc: input int
 * @argv: input char
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int j = 0;

	while (argc--)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}
