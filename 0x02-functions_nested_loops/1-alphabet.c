#include <main.h>
#include <stdio.h>
/**
 * main - prints lowercase alphabets
*/
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
