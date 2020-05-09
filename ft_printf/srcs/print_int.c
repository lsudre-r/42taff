#include "printf.h"

void	print_int(int value, t_buffer *buffer)
{
	if( value == 0 || value == (-2147483648))
		ft_nbchelou(value, buffer);
	else
		ft_itoaB2B(value, buffer, 10);
}

// int print_int(int val, char *buffer, int pos)
// {
// 	char s[30];
// 	int i;
// 	i = 0;
// 	while(val)
// 	{
// 		if(val < 0)
// 		{
// 			val =~ val + 1;
// 		}
// 		s[i++] = val % 10 + '0';
// 		val /= 10;
// 	}
// 	i--;
// 	if(pos + i > 4096)
// 	{
// 		write(1, buffer, 4096);
// 		pos = 0;
// 	}
// 	while(i >= 0)
// 		buffer[pos++] = s[i--];
// 	return(pos);
// }

