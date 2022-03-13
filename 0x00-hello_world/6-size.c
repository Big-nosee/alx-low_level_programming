#include<stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero if otherwise
*/
int main(void) 
{
	char chartype;
	int inttype;
	long int longinttype;
	long long int longlonginttype;
	float floattype;

	printf("size of char: %zu bytes\n", sizeof(chartype));
	printf("size of int: %zu bytes\n", sizeof(inttype));
	printf("size of long int: %zu bytes\n", sizeof(longinttype));
	printf("size of long long int: %zu bytes\n", sizeof(longlonginttype));
	printf("size of float: %zu bytes\n", sizeof(floattype));
	return (0);
}
