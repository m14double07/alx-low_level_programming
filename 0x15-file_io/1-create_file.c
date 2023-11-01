#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: Name of file
 * @text_content: String to write to the file
 * Return: 1 for success but -1 for failiure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, let, re;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT, O_WRONLY, O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (re = 0; text_content[re]; re++)

	let = write(fd, text_content, re);

	if (let == -1)
		return (-1);

	close(fd);

	return (1);

}
