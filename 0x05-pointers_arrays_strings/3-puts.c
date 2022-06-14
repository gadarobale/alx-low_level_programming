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
	for (; *str != '\n' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
