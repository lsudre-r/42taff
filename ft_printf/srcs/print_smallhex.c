#include "printf.h"

int print_smallhex(int hex, char *buffer, int i)
{
    check_buffer(i, buffer);
	buffer = ft_itoabasetobufferm(hex, buffer, 16, i);
	i = i + 20;
	return (i);
}
