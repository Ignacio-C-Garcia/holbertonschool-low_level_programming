#include <stdlib.h>
#include <stdio.h>
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
	unsigned int s1len = sizeof(s1[0]) - 1;
	unsigned int s2len = sizeof(s2)[0] - 1;
	unsigned int i;

	copy = malloc(s1len + s2len + 1);
	if (!copy)
		return (NULL);

	if (s2len < n)
		n = s2len;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; i < s1len; i++)
	{
		copy[i] = s1[i];
		copy[s1len + i] = s2[i];
	}
	printf("%d", s1len);
	copy[s1len + s2len] = '\0';

	return (copy);

}
