#include "main.h"
/**
* main - Entry block
* @void: no argument
* Return: 0
**/
int main (void)
{
	char putC[] = "_putchar";

	int length;

	for (length = 0; length < 8; length++)
	{
		_putchar(putC[length]);
	}
	_putchar('\n');
	return (0);
}
