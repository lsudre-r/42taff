#include "printf.h"

int print_strchar(char *s, int i, char *buffer)
{
	while(*s && s)
	{
		fill_buffer(i, buffer);
		buffer[i++]=*s++;
	}
	return(i);
}
