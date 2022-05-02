#include "main.h"
/**
 * append_text_to_file - Append text and the end of a file
 * @filename: name of the file
 * @text_content: content to append
 * Return: 1 o success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int txt, i, j = 0;

	if (!filename)
		return (-1);
	txt = open(filename, O_WRONLY | O_APPEND);
	if (txt < 0)
		return (-1);
	if (text_context)
	{
		while (text_content[j])
			j++;
		i = write(txt, text_content, j);
		if (i != j)
			return (-1);
	}
	close(txt);
	return (1);
}
