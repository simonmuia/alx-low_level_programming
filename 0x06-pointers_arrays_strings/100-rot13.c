/**
 * rot13 - Encodes a string using the rot13 algorithm
 * @s: Pointer to string to be encoded
 *
 * Return: Pointer to encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if ((*(s + i) >= 'a' && *(s + i) <= 'm') ||
				(*(s + i) >= 'A' && *(s + i) <= 'M'))
		{
			*(s + i) += 13;
		}
		else if ((*(s + i) >= 'n' && *(s + i) <= 'z') ||
				(*(s + i) >= 'N' && *(s + i) <= 'Z'))
		{
			*(s + i) -= 13;
		}
		i++;
	}

	return (s);
}
