#include  <stdio.h>
#include "header.h"

int main (void)
{
	int len;
	int len2;
/*	unsigned int ui; */
	/* void *addr; */
	
	/*int retval1, retval2;*/
	/*char n[]= "TESTING";*/
	/*retval1 = jkprintf("A\n");*/
	/*retval1 = jkputchar(n[4]);*/
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf ("%d is the lenght of printf", len2);
        /*printf("return value for putchar  is: %d and printf is %d\n",retval1, retval2);*/
	return (len);

}
