/**
 * _strlen - take  argument "*s" 
 *
 * Return: returns the length of a string. 
 *
 */

int _strlen(char *s)
{
	int leng;

	leng = sizeof(s) / sizeof(char);
	return (leng);
}
