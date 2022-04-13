#include "main.h"
/**
* _abs - retruns the absolute value of a number
* @n: accepts number
* Return: n if positive or zero,else n*-1
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
