#include "main.h"
/*
 * main - display 'a-z'
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	char ch;
	for(i = 0 ; i < 10 ; i++)
	{
        	for(ch = 'a'; ch <= 'z'; ch++)
        	{
	        	_putchar(ch);
		}
		_putchar('\n');
	}
}
