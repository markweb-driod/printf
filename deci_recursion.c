#include "main.h"
/**
 * deci_recursion - function the use our putchar print decimal
 * @number: input from printf
 * Return: Always 0 (Success)
 */

int deci_recursion(int number, int ratval)
{
	int k;	

	k = 0;

	if (number == 0)
	{
		return (0);
	}
	k = number / 10;
	ratval = ratval + 1;
	deci_recursion(k, ratval);
	jkputchar(number % 10 + '0');
	return (ratval);
}
