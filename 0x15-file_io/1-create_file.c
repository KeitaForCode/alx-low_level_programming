#include "main.h"

/**
 * create_file - will creates a file.
 * @fname: A pointer to the name of the file to create.
 * @txt_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *fname, char *txt_content)
{
	int fd, w, len = 0;

	if (fname == NULL)
		return (-1);

	if (txt_content != NULL)
	{
		for (len = 0; txt_content[len];)
			len++;
	}

	fd = open(fname, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, txt_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
