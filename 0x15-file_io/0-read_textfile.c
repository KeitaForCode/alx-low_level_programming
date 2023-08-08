#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and  print to STDOUT.
 * @fname: text file being read
 * @ltrs: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *fname, size_t ltrs)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(fname, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * ltrs);
	t = read(fd, buf, ltrs);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
