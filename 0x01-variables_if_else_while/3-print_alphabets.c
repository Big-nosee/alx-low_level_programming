#include <stdio.h>

/**
 * main - prints all letters in both upper and lower cases
 * Return: 0 if executed properly
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c ='A'; c <= 'Z')
	{
		putchar(c);
	}
	{
		putchar('\n');
	}
	return (0);
}
