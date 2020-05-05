#include "printf.h"

int print_char(int c, int i, char *buffer)
{
	check_buffer(i, buffer);
	buffer[i] = c;
	i++;
	return(i);
}
