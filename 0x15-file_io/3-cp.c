#include "main.h"
/**
 * get_error - prints an error
 * @error: an int number between 97 and 100
 * @file_name: name of the files
 * @fd_value: value of file descriptor when failed
 */
void get_error(char error, char **file_name, int fd_value)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name[1]);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name[2]);
			exit(99);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
			exit(100);
			break;
	}
}
/**
 * main - function
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 or a positive number if an error
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, aux;
	int file_read, file_write;
	char buff[1024];

	if (argc != 3)
		get_error(97, argv, 0);

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
		get_error(98, argv, 0);

	file_to = open(argv[2], O_CREAT | O_WRONLY, 0644);

		if (file_to == -1)
			get_error(99, argv, 0);

	for (file_read = 1; file_read > 0; )
	{
		file_read = read(file_from, buff, sizeof(buff));
		if (file_read == -1)
			get_error(98, argv, 0);

		file_write = write(file_to, buff, file_read);
		if (file_write == -1)
			get_error(99, argv, 0);
	}



	close(file_from);
	close(file_to);
	return (0);
}

