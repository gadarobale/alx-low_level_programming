/**
 * 4-print_rev.c -
 * @s: 
 * Return: 
 */
void print_rev(char *s)
{
	int i,j;

	j = 0;
	while (s[j] != '\n')
		j++;
	for(i = j-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
