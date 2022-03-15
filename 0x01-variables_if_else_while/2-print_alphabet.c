#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: 0 if executed properly
*/
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar("%c ", c);
		putchar("\n");
	}
	return (0);
}
