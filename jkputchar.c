/** custom Putchar file
 * @return: return 
 *
 */
#include "header.h"

int jkputchar(char a)
{
        return(write(1, &a, 1));
}
