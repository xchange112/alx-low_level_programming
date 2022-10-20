#include "main.h"
/**
 *_isalpha - check if character is an alphabet
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	/*This will check if the input is an alphabet*/
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
