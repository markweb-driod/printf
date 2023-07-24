/**
 * jkputchar - writes the character c to stdout
 * @a: The character to printto stndard output
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

#include "main.h"

int jkputchar(char a)
{
	return (write(1, &a, 1));
}
