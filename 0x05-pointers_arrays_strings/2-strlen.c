/**
 * _strlen - a function that returns the length of a string.
 * @s: a string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;
	int count;

for (i = 0; *(s + i) != '\0'; i++)
{
	count++;
}
return (count);
}
