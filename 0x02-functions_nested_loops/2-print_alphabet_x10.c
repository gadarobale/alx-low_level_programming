#include "main.h"
/*
 * main - display 'a-z'
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char ch;
	for(i = 0 ; i < 10 ; i++)
	{
        	for(ch = 'a'; ch <= 'z'; ch++)
        	{
	        	putchar(ch);
		}
	}
      	return (0);
}
