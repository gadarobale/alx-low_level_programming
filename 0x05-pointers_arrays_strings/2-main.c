#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "MY first strin!";
	len = _strlen(str);
	printf("%d\n",len);
	return (0);
}