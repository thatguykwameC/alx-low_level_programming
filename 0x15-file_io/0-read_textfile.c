#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to read
 * @letters: the number of bytes to read from the file
 *
 * Return: number of bytes wrtten to stdout, else 0 on error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *file_content_buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/* Allocate memory for the buffer */
	file_content_buffer = malloc(sizeof(char) * letters);
	if (file_content_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, file_content_buffer, letters);
	close(file_descriptor);

	if (bytes_read == -1)
	{
		free(file_content_buffer);
		return (0);
	}

	/* Write to STDOUT */
	bytes_written = write(STDOUT_FILENO, file_content_buffer, bytes_read);

	/* Free the allocated memory */
	free(file_content_buffer);

	if (bytes_read != bytes_written)
		return (0);

	return (bytes_written);
}
