#include "main.h"

/**
 * read_textfile - reads a text file and write to posix stdout
 * @filename: file name to read
 * @letters: number of letter to read and print
 *
 * Return: Always 0 (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t printed_char = 0;
	FILE *file_ptr;
	int _char;

	if (filename == NULL)
		return (0);

	/* open the file in read mode */
	file_ptr = fopen(filename, "r");

	if (file_ptr == NULL)
		return (0);

	while (printed_char < letters)
	{
		/* get char from file buffer */
		_char = fgetc(file_ptr);

		if (_char != EOF)
		{
			write(1, &_char, 1);
			printed_char++;
		}
		else
		{
			return (0);
		}
	}
	fclose(file_ptr);


	return (printed_char);

}
