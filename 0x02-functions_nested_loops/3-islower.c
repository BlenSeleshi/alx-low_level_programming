#include "main.h"
/**
* _islower - checks for lowercase
* @c: accepts a character
* Return: 1 if c is lowercase else 0
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
