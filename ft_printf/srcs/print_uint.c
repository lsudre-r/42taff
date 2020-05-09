#include "printf.h"

void	print_uint(unsigned int val, t_buffer *buffer)
{
	if( val == 0)
		ft_nbchelou(val, buffer);
	else
		ft_utoaB2B(val, buffer, 10);
}
