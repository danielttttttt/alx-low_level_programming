#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * Return: 1 if letter is lowercase. otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
