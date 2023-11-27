#include "main.h"

/**
 * error_file - checks if files can be opened
 * @src_file: source file descriptor
 * @dest_file: destination file descriptor
 * @argv: arguements vector
 */

void error_file(int src_file, int dest_file, char *argv[])
{
	if (src_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * copy_file - copies files
 * @src_file: source file descriptor
 * @dest_file: destination file descriptor
 * @argv: arguements vector
 */

void copy_file(int src_file, int dest_file, char *argv[])
{
	ssize_t read_chars, written_chars;
	char buffer[1024];

	read_chars = 1024;
	while (read_chars == 1024)
	{
		read_chars = read(src_file, buffer, 1024);
		if (read_chars == -1)
			error_file(-1, 0, argv);

		written_chars = write(dest_file, buffer, read_chars);
		if (written_chars == -1)
			error_file(0, -1, argv);
	}
}

/**
 * main - checks the code
 * @argc: arguments counter
 * @argv: the command line arguments
 *
 * Return: 0 on success, or exits with a specific status code
 */

int main(int argc, char *argv[])
{
	int src_file, dest_file, err_close;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	src_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(src_file, dest_file, argv);

	copy_file(src_file, dest_file, argv);

	err_close = close(src_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_file);
		exit(100);
	}

	err_close = close(dest_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
		exit(100);
	}

	return (0);
}
