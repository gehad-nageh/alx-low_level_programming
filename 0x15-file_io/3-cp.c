#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %s\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)

/**
 * main - the main program
 * @ac: argument count
 * @av: argument vector
 * Return: Nothing
 */
int main(int ac, char **av)
{
	int f_i = 0, t_i = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILEND, USAGE), exit(97);
	f_i = open(av[1], O_RDONLY);
	if (f_i == -1)
		dprintf(STDERR_FILEND, ERR_NOREAD, av[1], exit(98);
	t_i = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (t_i == -1)
		dprintf(STDERR_FILEND, ERR_NOWRITE, av[2], exit(99);

	while ((b = read(f_i, buf, READ_BUF_SIZE)) > 0)
		if (write(t_i, buf, b) != b)
			dprintf(STDERR_FILEND, ERR_NOWRITE, av[2], exit(99);
	if (b == -1)
		dprintf(STDERR_FILEND, ERR_NOREAD, av[1], exit(98);

	f_i = close(f_i);
	t_i = close(t_i);
	if (f_i)
		dprintf(STDERR_FILEND, ERR_NOCLOSE, f_i), exit(100);
	if (t_i)
		dprintf(STDERR_FILEND, ERR_NOCLOSE, f_i), exit(100);

	return (EXIT_SUCCESS);
}

