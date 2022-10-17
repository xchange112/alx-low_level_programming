#include <stdio.h>

/**
 * main - prints all possible combinations
 * of two two-digit numbers separated with
 * comma and space
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 98; ++a)
	{
		for (b = a + 1; b <= 99; ++b)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a == 98 && b == 99)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
