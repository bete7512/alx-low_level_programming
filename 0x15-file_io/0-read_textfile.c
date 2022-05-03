#include "main.h"




ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret;
	char *buffer;

	if (filename == NULL)
		return (0);
	if(fopen(ilename,O_RDWR)== - 1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(filename);
		return (0);
	}
	if (read(filename,buffer,letters)==-1)
	{
		free(buffer);
		return (0);
	}
	if (close(filename) == -1)
	{
		free(buffer);
		return (0);
	}
	ret =write(STDOUT_FILENO, buffer ,read(open(filename,O
                                                -RDWR)));
	if (re == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (ret);


}
