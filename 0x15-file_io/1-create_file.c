#include "main.h"

/**
 * create-file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: Always 0 (Success)
*/
int create_file(const char *filename, char *text_content)
{
	FILE *file_ptr;

	if (filename == NULL)
		return (-1);

	file_ptr = fopen(filename, "w");

	if (file_ptr == NULL)
		return (-1);

	while(*text_content != '\0')
	{
		fputc(*text_content, file_ptr);
		text_content++;
	}
	fclose(file_ptr);
	return (1);
}
