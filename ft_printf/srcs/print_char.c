#include "printf.h"

int print_char(int c, int i, char *buffer)
{
	char a;

	check_buffer(i, buffer);
	a = *ft_itoa(c);
	buffer[i] = c;
	i++;
	return(i);
}
