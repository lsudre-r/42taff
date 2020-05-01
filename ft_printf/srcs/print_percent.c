#include "printf.h"

int print_percent(int i, char *buffer)
{
	char a;
	check_buffer(i, buffer);
	a = 37;
	buffer[i] = a;
	i++;
	return(i);
}