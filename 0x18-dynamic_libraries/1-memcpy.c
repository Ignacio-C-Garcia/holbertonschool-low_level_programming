/**
 * _memcpy - copy src to dest
 * @dest: an array
 * @src: an array
 * @n: an int
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	dest[index] = src[index];

	return (dest);
}
