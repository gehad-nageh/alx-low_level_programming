#include "main.h"

/**
 * _strlen - function that find the length of astring
 * @s: input char
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	j = open(filename, O_WRONLY | O_APPEND);
	if (j == -1)
		return (-1);
	if (len)
		bytes = write(j, text_content, len);
	close(j);
	return (bytes == len ? 1 : -1);
}
