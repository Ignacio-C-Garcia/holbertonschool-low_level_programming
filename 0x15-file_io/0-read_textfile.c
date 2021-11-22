#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: name of the file
 * @letters: number of letters to read and prints
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int aux, c, a;

	if (!filename)
		return (0);

	aux = open(filename, O_RDONLY);

	if (aux == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		close(aux);
		return (0);
	}

	a = read(aux, buffer, letters);
	c = write(1, buffer, a);
	if (c == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(aux);
	return (c);
}
