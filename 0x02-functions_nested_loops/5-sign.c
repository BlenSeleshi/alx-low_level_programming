#include "main.h"
/**
* print_sign - prints the sign of a number
* @n: accepts a number
* Return: 1 if positive, 0 if its 0, -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	elseif (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
