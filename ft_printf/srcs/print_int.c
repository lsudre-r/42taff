#include "printf.h"

int print_int(int value, char *buffer, int i)
{
	check_buffer(i, buffer);
	if( value == 0 || value == (-2147483648))
		buffer = ft_nbchelou(value, buffer, i);
	else
		buffer = ft_itoabasetobuffer(value, buffer, 10, i);
	i = i + 15;
	return (i);
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

