#include "main.h"
/**
* main - Entry block
* @void: no argument
* Return 0
**/
int main(void)
{
	char putC[] = "_putchar";

	int l;

	for(l = 0; l < 8; l++)
	{
		_putchar(putC[l]);
	}
	_putchar('\n');
	return (0);
}
