#include "main.h"
/**
 *read_textfile - from the stream
 *@filename:pointer to the file
 *@letters:value for unsigned int
 *Return:ssize_t
 *
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret;
	int filer;
	int holder;
	ssize_t reader;
	char *buffer;

	if (filename == NULL)
		return (0);
	filer = open(filename, O_RDWR);
	if (filer == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(filer);
		return (0);
	}
	reader = read(filer, buffer, letters);
	if (reader == -1)
	{
		free(buffer);
		return (0);
	}
	holder = close(filer);
	if (holder == -1)
	{
		free(buffer);
		return (0);
	}
	ret = write(STDOUT_FILENO, buffer, reader);
	if (ret == -1 || ret != reader)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (ret);


}
