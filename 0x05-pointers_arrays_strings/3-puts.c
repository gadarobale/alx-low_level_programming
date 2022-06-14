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
	int leng;

	leng = sizeof(str) / sizeof(str[0]);
	for(int i = 0; i <= leng; i++)
	{
		_puts(srt[i]);
		_puts("\n");
}
