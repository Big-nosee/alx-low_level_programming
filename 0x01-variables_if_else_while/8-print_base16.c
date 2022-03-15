#include <stdio.h>

/**
 * main - prints all base sixteen numbers
 * Return: 0 if successfull
*/
int main(void)
{
	int c;
	char d;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	{
		putchar('\n');
	}
	return (0);
}
