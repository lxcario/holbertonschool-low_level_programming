#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written = 0;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	/* O_APPEND ensures writing starts at the end. */
	/* No O_CREAT, so it fails if file doesn't exist. */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /* File does not exist or no write permissions */

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || (size_t)bytes_written != len)
		{
			close(fd);
			return (-1); /* Write failed or incomplete */
		}
	}

	close(fd);
	return (1);
}
