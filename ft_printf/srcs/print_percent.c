#include "printf.h"

int print_percent(int i, char *buffer)
{
	char a;
    if(i==4096)
    {
        write(1, buffer, 4096);
        i = 0;
    }
    a = 37;
	buffer[i] = a;
    i++;
    return(i);
}