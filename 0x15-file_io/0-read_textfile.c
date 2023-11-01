#include "main.h"

/**
 *read_textfile - Writes a function that reads a text file and
 *prints it to the POSIX standard output
 *@filename: String to be written
 *@letters: Number of bytes to print
 *Return: Number written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t w, r;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	close(fd);
	free(buff);

	return (w);
}
