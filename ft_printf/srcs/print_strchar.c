#include "printf.h"

int print_strchar(char *s, int i, char *buffer)
{
	while(*s && s)
	{
		check_buffer(i, buffer);
		buffer[i++]=*s++;
	}
	return(i);
}
// itoatobuffer
// fill_buffer --> pointer sur struc buffer et buffer et int 
// fonction initialisation -> mettre tout a 0 bzero
// int 	fill_buffer(int i, char *buffer);
