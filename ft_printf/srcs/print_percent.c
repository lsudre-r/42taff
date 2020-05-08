#include "printf.h"

int print_percent(t_buffer buffer)
{
	fill_buffer((&buffer), '%');
	return((&buffer)->i);
}