#include "printf.h"

int	check_buffer(int i, char *buffer)
{
	if(i==4096)
	{
		write(1, buffer, 4096);
		i = 0;
	}
	return (0);
}
