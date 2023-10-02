#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024
/**
 * error_file - checks if files can be opened.
 * @from_file: from_file.
 * @to_file: to_file.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int from_file, int to_file, char *argv[])
{
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for ALX School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, err_msg;
	ssize_t nchars, nwr;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp from_file to_file");
		exit(97);
	}

	from_file = open(argv[1], O_RDONLY);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from_file, to_file, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from_file, buffer, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		nwr = write(to_file, buffer, nchars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_msg = close(from_file);
	if (err_msg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}

	err_msg = close(to_file);
	if (err_msg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	return (0);
}
