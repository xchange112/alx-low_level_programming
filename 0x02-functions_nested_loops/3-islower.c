#include "main.h"
/**
 *main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int _islower();
}
int _islower(int c)
{
	/*This will tell if a character is in it's lowercase
	 */
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
