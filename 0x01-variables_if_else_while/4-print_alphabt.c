#include <stdio.h>

/**
* main - Entry point 
*
* Return: Always 0 (Successs)
*/
int main(void)
{
	char ch = 'a';

	while (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
