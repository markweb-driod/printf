#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
<<<<<<< HEAD
 * _printf - custon printf function working according to ALX specification
 * * @format: format of strings to be printed
 * Return: Printed chars
*/
=======
/** format: the string format specifier
 * ...: variable number of arguments
 * jkprintf - custon printf function working according to ALX specification
 * @ratval: the character counter to be returned
 * _printf: custon printf function working according to ALX specificatio
 * Returns: the character counter to be returned
 */
>>>>>>> 02421e8d5271acffd23cd367488752eae0c52323

int _printf(const char *format, ...)

{
	int ratval = 0;
	int count = 0;

	va_list args;

	va_start(args, format);

	while (format[count] != '\0')
	{
		if (format[count] != '%')
		{
			jkputchar(format[count]);
<<<<<<< HEAD
			ratval - ratval + 1;
=======

			ratval =  ratval + 1;

>>>>>>> 02421e8d5271acffd23cd367488752eae0c52323
		}
		else if (format[count + 1] == 'c')
		{
			jkputchar(va_arg(args, int));
			count++;
		}
		else if (format[count + 1] == '%')
		{
			jkputchar('%');
			count++;
<<<<<<< HEAD
		}
		else if(format[count + 1] == 's')
		{
			int ret_valinner = function(va_arg(args,char *));
			count++;
			ratval = ratval + (ret_valinner - 1);
		}
		ratval = ratval + 1;
		count++;
	}
	return (ratval);
}
