#include <stdio.h>
/**
 * main - prints zero to nine
 * Return: 0 if successful
*/
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}
