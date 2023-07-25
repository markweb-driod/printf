#include <stdio.h>
#include "main.h"

/**
 * main - this prints out sample file
 *
 * Return: 0 success
 */

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("%d is the lenght of printf \n", len2);
	printf("%d is the lenght of our printf \n", len);

	return (0);
}
