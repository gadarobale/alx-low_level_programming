#include "main.h"
/*
 * print_alphabet - display 'a-z'
 * Return: Always 0.
 */
voi print_alphabet(void)
{
	char ch;

	for(ch= 'a'; ch <='z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n')
}
