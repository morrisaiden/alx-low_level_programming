#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to the POSIX standard output.
 *
 * @filename: A pointer to the name of the file.
 *
 * @letters: The number of letters to read and print
 *
 * Return: The number of letters read and printed, or 0 on NULL
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
