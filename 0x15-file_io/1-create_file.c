#include "main.h"
/**
 *create_file - create a file
 *@filename: file name
 *@text_content: text content
 *Return: a number
 */
int create_file(const char *filename, char *text_content)
{
	int aux, c, w;

	if (!filename)
		return (-1);

	aux = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!text_content)
		return (1);
	if (aux == -1)
		return (-1);
	for (c = 0; text_content[c]; c++)
	{

	}
	w = write(aux, text_content, c);
	if (w == -1)
	{
		close(aux);
		return (-1);
	}
	close(aux);
	return (1);
}
