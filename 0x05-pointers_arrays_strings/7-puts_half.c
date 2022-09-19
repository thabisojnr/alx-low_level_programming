#include "main.h"

/**
* puts_half - function that prints half string
* @str: this is the input string
*/

void puts_half(char *str)
{
	int index, half;

	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
