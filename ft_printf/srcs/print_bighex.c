#include "printf.h"

int print_bighex(int hex, char *buffer, int i)
{
	if( hex == 0)
		buffer = ft_nbchelou(hex, buffer, i);
	else
		buffer = ft_itoabasetobuffer((unsigned int)hex, buffer, 16, i);
	i = i + 15;
	return (i);
}
