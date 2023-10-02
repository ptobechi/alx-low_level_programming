#include "main.h"

/**
 * create_file - creates a file
 * @file: filename.
 * @content: content to write to the file.
 *
 * Return: (1) success or (-1) fail.
 */
int create_file(const char *file, char *content)
{
	int filed;
	int no;
	int rwr;

	/** if filename is not specified*/
	if (!file)
		return (-1);

	/** open file in rw---- mode*/
	filed = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/** rerturn if fail */
	if (filed == -1)
		return (-1);

	/* set content if not set */
	if (!content)
		content = "";

	for (no = 0; content[no]; no++)
		;

	rwr = write(filed, content, no);

	if (rwr == -1)
		return (-1);

	close(filed);

	return (1);
}
