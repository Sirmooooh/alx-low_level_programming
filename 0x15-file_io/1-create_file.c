#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int mo, h, len = 0;

	if (!filename)
		return (-1);
	mo = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (mo == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		h = write(mo, text_content, len);
		if (h == -1)
		{
			close(mo);
			return (-1);
		}
	}
	close(mo);
	return (1);
}
