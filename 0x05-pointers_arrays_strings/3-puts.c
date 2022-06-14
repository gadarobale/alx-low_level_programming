/**
 * _puts(char *str) -
 * @str: 
 * Return: 
 */
void _puts(char *str)
{
	int i,j;

	j = 0;
	while (str[j] != '\n')
		j++;
	for(i = 0; i > j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
