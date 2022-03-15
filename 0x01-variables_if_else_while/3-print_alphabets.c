#include <stdio.h>

/**
 * main - prints all letters in both upper and lower cases
 * Return: 0 if executed properly
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}
