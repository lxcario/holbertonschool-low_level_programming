#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints an error message to STDERR.
 * @code: exit code.
 * @message: message format string.
 * @arg: argument to message (optional, can be NULL).
 */
void error_exit(int code, const char *message, const char *arg)
{
	if (arg)
		dprintf(STDERR_FILENO, message, arg);
	else
		dprintf(STDERR_FILENO, "%s", message);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, or exit codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", (char []){fd_from + '0'});
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", (char []){fd_to + '0'});

	return (0);
}
