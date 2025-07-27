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
	int files;
	ssize_t bytes_write;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	files = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (files == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes_write = write(files, text_content, strlen(text_content));
		if (bytes_write == -1 || (size_t)bytes_write != strlen(text_content))
		{
			close(files);
			return (-1);
		}
	}
	if (close(files) == -1)
		return (-1);
	return (1);
}
