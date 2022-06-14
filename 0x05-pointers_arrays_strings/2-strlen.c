/**
 * _strlen - take  argument "*s"
 * @s: it is an pointer argument.
 * Return: returns the length of a string.
 *
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == '\n')
		{
			int i2;

			i2 = i - 3;
			return (i2);
		}
	}
}
