#include "printf.h"

char* ft_reverseNlower(char *buffer, int i, int j)
{
	while (i < j)
	{
		buffer[i] = ft_tolower(buffer[i]);
		ft_swap(&buffer[i++], &buffer[j--]);
	}
	return (buffer);
}

