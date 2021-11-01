#include "main.h"
/**
 * main - prits name of the file
 * Return: always 0
 */
int main(void)
{
	char file_name[] = __FILE__;
	int i;

	for (i = 0; file_name[i] != 0; i++)
	_putchar(file_name[i]);
	_putchar('\n');
	return (0);
}
