#include "main.h"
/**
 *_islower - Return 1 if letter is lowercase, 0 if not.
 *@c: char type letter
 * Return: Always 0
 */
int _islower(int c)
{
	/*if the character is between 96 and 123*/
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
