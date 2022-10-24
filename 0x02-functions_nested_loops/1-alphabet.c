#include "main.h"

/**
  * print_alphabet - print all english alphabets
  * in lower
  *
  * Return: void
  */
void print_alphabet(void)
{
	char a = 'a';

	for (a; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
	return (0);

}
