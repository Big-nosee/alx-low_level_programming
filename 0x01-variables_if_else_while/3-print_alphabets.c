#include <stdio.h>

/**
 * main - prints all letters in both upper and lower cases
 * Return: 0 if executed properly
*/
int main(void)
{
	char c;
	char C;
	for ((c = 'a'; c <= 'z';c++); C ='A'; C <= 'Z';C++)
	{
		putchar(c);
	}
	{
		putchar(C);
	}
	{
		putchar('\n');
	}
	return (0);
}
