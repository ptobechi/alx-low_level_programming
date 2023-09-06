#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry Point of the program
 * @argc: argument count
 * @argv: variable argument
 *
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{
	int file_from_ptr, file_to_ptr;
	char *file_from = argv[1];
	char *file_to = argv[2];
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from_ptr = open(file_from, O_RDONLY);
	if (file_from_ptr)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	file_to_ptr = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if(file_to_ptr == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(file_to_ptr);
		return (99);
	}

	while ((bytes_read = read(file_from_ptr, buffer, BUFFER_SIZE)) > 0) {
		bytes_written = write(file_to_ptr, buffer, bytes_read);
		if (bytes_written == -1) {
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(file_from_ptr);
			close(file_to_ptr);
			return (99);
		}
	}

	if (bytes_read == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(file_from_ptr);
		close(file_to_ptr);
		return (98);
	}

	if (close(file_from_ptr) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_ptr);
		close(file_to_ptr);
		return (100);
	}

	if (close(file_to_ptr) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_ptr);
		return (100);
	}

	return (0);
}
