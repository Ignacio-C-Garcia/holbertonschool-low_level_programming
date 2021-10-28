#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - return lenght of str
 * @str: string
 * Return: number;
 */
int _strlen(char *str)
{
	int i;
	int counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes to copy from str s2
 * Return: a pointer to a new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *copy;
	unsigned int s1len;
	unsigned int s2len;
	unsigned int i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s1len = _strlen(s1);
	s2len = _strlen(s2);

	if (s2len < n)
		n = s2len;

	copy = malloc(s1len + n + 1);
	if (!copy)
		return (NULL);

	for (i = 0; i < s1len; i++)
		copy[i] = s1[i];

	for (i = 0; i < n; i++)
		copy[s1len + i] = s2[i];

	if (s1len == 0)
		copy[n] = '\0';
	else if (s2len == 0)
		copy[s1len] = '\0';
	else
		copy[s1len + n - 1] = '\0';

	return (copy);

}
