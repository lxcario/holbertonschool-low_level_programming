#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - Prints an error message and exits.
 * @code: The exit code.
 * @msg: The error message format string.
 * @arg: The argument for the message (e.g., filename).
 * @fd_val: File descriptor value for close errors, or -1 otherwise.
 */
void handle_error(int code, const char *msg, const char *arg, int fd_val)
{
	dprintf(STDERR_FILENO, msg, arg);
	if (code == 100)
		dprintf(STDERR_FILENO, "%d\n", fd_val);
	else
		dprintf(STDERR_FILENO, "\n");
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		handle_error(97, "Usage: cp file_from file_to", NULL, -1);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error(98, "Error: Can't read from file %s", argv[1], -1);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		handle_error(99, "Error: Can't write to %s", argv[2], -1);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			handle_error(99, "Error: Can't write to %s", argv[2], -1);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		handle_error(98, "Error: Can't read from file %s", argv[1], -1);
	}

	if (close(fd_from) == -1)
		handle_error(100, "Error: Can't close fd %s", NULL, fd_from);
	if (close(fd_to) == -1)
		handle_error(100, "Error: Can't close fd %s", NULL, fd_to);

	return (0);
}
