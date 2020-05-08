#include "printf.h"

int print_strchar(char *s, t_buffer buffer)
{
	while(*s)
		fill_buffer((&buffer), *s++);
	return((&buffer)->i);
}

