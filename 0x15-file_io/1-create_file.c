#include "main.h"
/**
 * _strlen - function that returns the length of astring
 * @s: char intput
 * Return: Nothing
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int j;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	j = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (j == -1)
		return (-1);
	if (len)
		bytes = write(j, text_content, len);
	close(j);
	return (bytes == len ? 1 : -1);
}
