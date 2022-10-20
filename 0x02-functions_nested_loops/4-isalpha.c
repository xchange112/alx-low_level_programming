#include "main.h"
/**
 * main - check the code.
 *_isalpha; RETURNS 1 if true else returns 0.
 * Return: Always 0.
 */
int main(void)
{
	int _isalpha(int c);
}
int _isalpha(int c)
{
	/*This will check if the input is an alphabet*/
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
