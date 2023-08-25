/**
 * _strncpy - function that copies a string
 *
 * @dest: destination string
 * @src: source srting
 * @n: integer that specify the max num of chars to be copied.
 * Return: dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
	char *dest_ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}

	return (dest);
}
