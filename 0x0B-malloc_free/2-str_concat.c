#include <stdlib.h>
/**
 * _strlen - return the length of a string
 * @str: a string
 * Return: a positive number
 */
int _strlen(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
/**
 * copy - copy the string src to de string dest
 * @dest: string
 * @src: string
 * @n: number of the character to start copying
 * Return: pointer to dest
 */
void *copy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + n] = src[i];
	}
	dest[i + n] = '\0';
	return (0);
}
/**
 *str_concat - concatenates two strings.
 *@s1: a string
 *@s2: a string
 *Return: a pointer to a string that contains the s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int str1_len;
	int str2_len;
	char *result;

	if (s1 == NULL && s2 == NULL)
	{
		result = malloc(1);
		if (!result)
			return (0);
		result = '\0';
		return (result);
	}
	if (s1 == NULL)
	{
		str2_len = _strlen(s2);
		result = malloc(str2_len + 1);
		if (!result)
			return (0);
		copy(result, s2, 0);
		return (result);
	}
	if (s2 == NULL)
	{
		str1_len = _strlen(s1);
		result = malloc(str1_len + 1);
		if (!result)
			return (0);
		copy(result, s1, 0);
		return (result);
	}
	str1_len = _strlen(s1);
	str2_len = _strlen(s2);
	result = malloc(str1_len + str2_len + 1);
	if (!result)
		return (0);
	copy(result, s1, 0);
	copy(result, s2, str1_len);
	return (result);

}
