#include "main.h"

/**
 * append_text_to_file - add text content to the end of a file
 * @filename: name of the file to add content to
 * @text_content: string of null terminated char to add to the end of the file
 *
 * Return: Always 0 (Success)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file_ptr;

	if (filename == NULL)
		return (-1);

	/*open file in append mode*/
	file_ptr = fopen(filename, "a");

	/* check edge cases for text content and file avail */
	if (file_ptr == NULL)
		return (-1);

	/*append to file */
	while (*text_content != '\0' && text_content != NULL)
	{
		fputc(*text_content, file_ptr);
		text_content++;
	}
	fclose(file_ptr);/*close file*/

	return (1);
}
