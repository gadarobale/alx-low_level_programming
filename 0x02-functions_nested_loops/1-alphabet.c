#include "main.h"
/*
 * main - display 'a-z'
 * Return: Always 0.
 */
int main(void)
{
	char ch;
	for(ch= 'a'; ch <='z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
