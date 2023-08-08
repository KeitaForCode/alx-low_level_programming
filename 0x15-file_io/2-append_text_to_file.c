#include "main.h"

/**
 * append_text_to_file - will appends text at the end of a file.
 * @fname: A pointer to the name of the file.
 * @txt_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *fname, char *txt_content)
{
	int o, w, len = 0;

	if (fname == NULL)
		return (-1);

	if (txt_content != NULL)
	{
		for (len = 0; txt_content[len];)
			len++;
	}

	o = open(fname, O_WRONLY | O_APPEND);
	w = write(o, txt_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
