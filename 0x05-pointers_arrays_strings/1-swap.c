/**
 * swap_int - it take two argument "*a" and "*b".
 *
 * @a: it is pointers this fuction take as argumenrts.
 * @b: it is pointers this fuction take as arguments.
 * Return: void.
 *
 */
void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
