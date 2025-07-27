#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int files;
	char *buffer;
	ssize_t bytes_read, bytes_write;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	files = open(filename, O_RDONLY);
	if (files == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(files, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(files);
		return (0);
	}

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(files);

	if (bytes_write != bytes_read)
		return (0);
	return (bytes_write);
}
