#include "main.h"

/**
* jkfunction - strings function to handle string printing
* @sentstring: String parameter sent to the function
* Return: Return string count to be added to previous count
*/

int jkfunction(char *sentstring)
{
	int element, retval;

	element = 0;
	retval = 0;

	if (sentstring)
	{
		while (sentstring[element] != '\0')
		{
			jkputchar(sentstring[element]);
			retval = retval + 1;
			element++;
		}
	}
	return (retval);
}
