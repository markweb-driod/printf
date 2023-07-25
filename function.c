#include "main.h"

/**
* function - strings function to handle string printing
* @sentstring: String parameter sent to the function
* Return: Return string count to be added to previous count
*/

int function(char *sentstring)
{
	int element, retval;

	element = retval = 0;

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
