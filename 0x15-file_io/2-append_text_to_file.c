#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: the name of the file to append to
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, else -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, num_letters, result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		/* Calculates number of letters in the text_content */
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		/* Write the content to the file */
		result = write(file_descriptor, text_content, num_letters);

		if (result == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
