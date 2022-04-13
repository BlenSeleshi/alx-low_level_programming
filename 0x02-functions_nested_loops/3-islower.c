#include "main.h"
/**
* _is lower - checks for lowercase
* @c: accepts a character
* return: 1 if c is lowercase else returns 0
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
