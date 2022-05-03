#include "main.h"



size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}


int create_file(const char *filename, char *text_content)
{
	int fd, close_check;
	size_t length;
	ssize_t write_actual;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	length = _strlen(text_content);

	write_actual = write(fd, text_content, length);
	if (write_actual == -1)
		return (-1);

	close_check = close(fd);
	if (close_check == -1)
		return (-1);

	return (1);
}
