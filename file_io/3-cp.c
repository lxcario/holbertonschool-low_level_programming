#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit_str - prints an error message with a string argument and exits.
 * @code: exit code.
 * @message: format string.
 * @arg: string to insert into the format.
 */
void error_exit_str(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * error_exit_fd - prints an error message with a file descriptor and exits.
 * @code: exit code.
 * @message: format string.
 * @fd: file descriptor to insert into the format.
 */
void error_exit_fd(int code, const char *message, int fd)
{
	dprintf(STDERR_FILENO, message, fd);
	exit(code);
}

/**
 * main - Copies content of one file to another.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 on success, exits on error with relevant code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit_str(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit_str(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit_str(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit_str(99, "Error: Can't write to %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit_str(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(fd_from) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
