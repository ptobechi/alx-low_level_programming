#include "main.h"
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed on sucess or (0) if failed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t no_read_word, no_word_read;
	char *buffer;

	/** check if filename is valid*/
	if (!filename)
		return (0);

	/** open file*/
	fd = open(filename, O_RDONLY);

	/** return 0 if failed to open file*/
	if (fd == -1)
		return (0);

	/** allocate mem for file letters*/
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	no_read_word = read(fd, buffer, letters);
	no_word_read = write(STDOUT_FILENO, buffer, no_read_word);

	close(fd);

	free(buffer);

	return (no_word_read);
}

