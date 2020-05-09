#include "printf.h"

void print_bighex(int hex, t_buffer *buffer)
{
	if( hex == 0)
		ft_nbchelou(hex, buffer);
	else
		ft_itoaB2B(hex, buffer, 16);
}
