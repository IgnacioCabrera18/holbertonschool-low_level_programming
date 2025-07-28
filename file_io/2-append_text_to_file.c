#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int files, len = 0, written;

	if (filename == NULL)
		return (-1);

	files = open(filename, O_WRONLY | O_APPEND);
	if (files == -1)
		return (-1);
	
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		written = write(files, text_content, len);
		if (written == -1)
		{
			close(files);
			return (-1);
		}
	}

	close (files);
	return (1);
}
