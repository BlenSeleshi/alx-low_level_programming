#include "main.h"
/**
* _is lower - checks for lowercase
*
**/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return(0);
}
