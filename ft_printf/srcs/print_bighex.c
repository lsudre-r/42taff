#include "printf.h"

int print_bighex(int hex, t_buffer buffer)
{
	if( hex == 0)
		ft_nbchelou(hex, buffer);
	else
		ft_itoaB2B(hex, buffer, 16);
	return ((&buffer)->i);
}
