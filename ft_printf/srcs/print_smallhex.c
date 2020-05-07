#include "printf.h"

int print_smallhex(int hex, char *buffer, int i)
{
	check_buffer(i, buffer);
	if( hex == 0)
		buffer = ft_nbchelou(hex, buffer, i);
	else
		buffer = ft_itoabasetobufferm(hex, buffer, 16, i);
	i = i + 15;
	return (i);
}
