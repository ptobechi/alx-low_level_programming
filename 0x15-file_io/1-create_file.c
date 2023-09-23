#include "main.h"

/**
 * create_file - creates a file
 * @file: filename.
 * @content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *file, char *content)
{
	int filed;
	int nletters;
	int rwr;

	if (!file)
		return (-1);

	/** open file */
	filed = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/** rerturn if fail */
	if (filed == -1)
		return (-1);

	/* set content if not set */
	if (!content)
		content = "";

	for (nletters = 0; content[nletters]; nletters++)
		;

	rwr = write(fd, content, nletters);

	if (rwr == -1)
		return (-1);

	close(filed);

	return (1);
}
