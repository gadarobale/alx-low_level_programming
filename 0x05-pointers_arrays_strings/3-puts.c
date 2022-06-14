/**
 * _puts - it takes 'str' argument
 *
 * @str: is a ponter.
 *
 * Return: void.
 *
 */
void _puts(char *str)
{
	for (int i = 0; ; i++)
	{
		if (str[i] != '\n')
		{
			putchar(str[i]);
		}
		if else(str[i] == '\n')
		{
			putchar('\n');
			return (void);
		}
	}
}
