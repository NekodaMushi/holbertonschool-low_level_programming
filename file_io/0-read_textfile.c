#include "main.h"

/**
 * read_textfile - fct that read a file's content
 *  and print into format output
 *
 * @filename: name of the file
 * @letters: var used
 * Return: What's printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_, write_;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(ssize_t) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_ = read(fd, buf, letters);
	if (read_ == -1)
	{
		free(buf);
		return (0);
	}
	write_ = write(STDOUT_FILENO, buf, read_);
	if (write_ == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (write_);
}
