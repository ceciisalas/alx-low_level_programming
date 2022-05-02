#include "main.h"
/**
 * read_textfile - Read a text file and print it to the STDOUT
 * @filename: name of the file
 * @letters: number of letters
 * Return: The number of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt;
	int i, j;
	char *fm;

	if (!filename)
		return (0);
	txt = open(filename, O_RDONLY);
	if (txt < 0)
		return (0);
	fm = malloc(sizeof(char) * letters);
	if (!fm)
		return (0);
	i = read(txt, fm, letters);
	if (i < 0)
	{
		free(fm);
		return (0);
	}
	fm[i] = '\0';
	close(txt);
	j = write(STDOUT_FILENO, fm, i);
	if (j < 0)
	{
		free(fm);
		return (0);
	}
	free(fm);
	return (j);
}
