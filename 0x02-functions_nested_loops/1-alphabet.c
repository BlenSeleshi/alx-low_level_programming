#include "main.h"
/**
* main - Entry block
* @void: no argument
* return: 0
**/
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
