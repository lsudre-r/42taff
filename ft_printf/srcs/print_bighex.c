#include "printf.h"

int print_bighex(int hex, char *buffer, int i)
{
    check_buffer(i, buffer);
	buffer = ft_itoabasetobuffer(hex, buffer, 16, i);
	i = i + 15;
	return (i);
}
