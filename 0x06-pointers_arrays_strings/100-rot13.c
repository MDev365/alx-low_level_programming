
/**
 * rot13 - print string in rot13
 * @s: string
 *
 * Return: pointer to string
 */
char *rot13(char *s)
{
	int i, n;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z' && n = 1) || (s[i] >= 'a' && s[i] <= 'z' && n = 2))
		{
			if ((s[i] + 13 > 'Z' && n == 1) || (s[i] + 13 > 'z' && n == 2))
				_putchar(s[i] - 13);
			else
				_putchar(s[i] + 13);
		}
		else
		{
			_putchar(s[i]);
		}
	}
	return (s);
}
