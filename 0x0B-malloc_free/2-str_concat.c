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

	for (i = 0; str[i] == '\0'; i++)
	{
		count++;
	}
	return (count);
}
/**
 * copy - copy the string src to de string dest
 * @dest: string
 * @src: string
 * Return: pointer to dest
 */
char *copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
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

	if (s1 == NULL)
	{
		str2_len = _strlen(s2);
		result = malloc(str2_len + 1);
		if (!result)
			return (0);
		copy(result, s2);
		return (result);
	}
	if (s2 == NULL)
	{
		str1_len = _strlen(s1);
		result = malloc(str1_len + 1);
		if (!result)
			return (0);
		copy(result, s1);
		return (result);
	}
	str1_len = _strlen(s1);
	str2_len = _strlen(s2);
	result = malloc(str1_len + str2_len + 1);
	copy(result, s1);
	copy(result + str1_len, s2);
	result[_strlen(result)] = '\0';
	return (result);

}
