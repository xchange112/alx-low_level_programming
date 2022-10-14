#include<stdio.h>
/**
 * main- Start point
 * Return: End point 
 */
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %ld bytes\n", sizeof(charType));
	printf("Size of an int: %ld bytes\n", sizeof(integerType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	return (0);
}
