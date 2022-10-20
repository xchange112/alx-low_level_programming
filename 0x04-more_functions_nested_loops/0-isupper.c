#include "main.h"
#include <stdio.h>
/**
 * isupper - function that checks for uppercase letter
 * @c: int type number
 * Return: 1 if uppercase, else 0
 */
int _isupper(int c)
{
	/*This checks for uppercase letters*/
	int c;

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
