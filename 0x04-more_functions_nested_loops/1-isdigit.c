#include "main.h"
/**
 * _isdigit - checks if the input is a digit
 * @c: int representing
 * Return: return 1 if is a digit else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
