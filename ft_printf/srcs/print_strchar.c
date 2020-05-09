#include "printf.h"

void	print_strchar(char *s, t_buffer *buffer)
{
	while(*s)
		fill_buffer(buffer, *s++);
}

