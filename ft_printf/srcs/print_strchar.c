#include "printf.h"

int print_strchar(char *s, int i, char *buffer)
{
	while(*s && s)
	{
		if(i==4096)
		{
			write(1, buffer, 4096);
			i = 0;
		}
		buffer[i++]=*s++;
	}
	return(i);
}
