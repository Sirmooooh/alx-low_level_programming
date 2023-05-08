#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int mo, h, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	mo = open(filename, O_WRONLY | O_APPEND);
	if (mo == -1)
	{
		mo = open(filename, O_CREAT | O_WRONLY, 0600);
		if (mo == -1)
			return (-1);
	}

	h = write(mo, text_content, len);
	if (h == -1)
	{
		close(mo);
		return (-1);
	}
	close(mo);
	return (1);
}
