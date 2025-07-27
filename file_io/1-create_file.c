#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 *create_file - crea un archivo
 *@filename: el nobre del archivo
 *@text_content: el contenido del texto
 *Return: -1 o 1
 */

int create_file(const char *filename, char *text_content)
{
	int files, len;
	ssize_t bytes_write;

	if (filename == NULL)
		return (-1);

	files = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
	if (files == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_write = write(files, text_content, len);
		if (bytes_write == -1)
		{
			close(files);
			return (-1);
		}
	}
	close(files);
	return (1);
}
