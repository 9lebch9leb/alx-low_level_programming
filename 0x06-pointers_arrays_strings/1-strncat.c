/**
 * _strncat - concatenate two strings
 *
 * @dest: destination string
 * @src: source srting
 * @n: integer that specify the max num of chars copy from src to dest
 * Return: dest
 */
char *_strncat(char *dest, const char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';
	return (dest);
}
