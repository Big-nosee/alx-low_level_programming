/*
 * File: 0-isupper.
 * Auth: Samson Okehi
 */

#include "main.h"

/**
 * _isupper - checks for uppercase characters.
 * Returns: 1 if c is uppercase
 * Returns: 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
