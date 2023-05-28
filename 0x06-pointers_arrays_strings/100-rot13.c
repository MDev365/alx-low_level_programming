
/**
 * rot13 - print string in rot13
 * @s: string
 *
 * Return: pointer to string
 */
char *rot13(char *str)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; alpha[i] != '\0' ; i++)
		{
			str[i] = rot13[i];
		}
		/*
		*if ((s[i] >= 'A' && s[i] <= 'Z' && n = 1) || (s[i] >= 'a' && s[i] <= 'z' && n = 2))
		*{
		*	if ((s[i] + 13 > 'Z' && n == 1) || (s[i] + 13 > 'z' && n == 2))
		*		_putchar(s[i] - 13);
		*	else
		*		_putchar(s[i] + 13);
		*}
		*else
		*{
		*	_putchar(s[i]);
		*}
		*/
	}
	return (str);
}
