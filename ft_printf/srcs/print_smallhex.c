#include "printf.h"

void print_smallhex(int hex, t_buffer *buffer)
{
	if( hex == 0)
		ft_nbchelou(hex, buffer);
	else
		ft_itoaB2Bm(hex, buffer, 16);
}
