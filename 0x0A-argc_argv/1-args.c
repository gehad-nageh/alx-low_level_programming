#include <stdio.h>

/**
 *main - function that print the number of argument
 *@argc: input int
 *@argv: input char
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
