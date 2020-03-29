#include "printf.h"

int print_char(int c, int i, char *buffer)
{
    char a;
    if(i==4096)
    {
        write(1, buffer, 4096);
        i = 0;
    }
    a = *ft_itoa(c);
	buffer[i] = c;
    i++;
    return(i);
}
