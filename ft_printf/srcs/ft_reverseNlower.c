#include "printf.h"

char* ft_reverseNlower(char *buffer, int i, int j)
{
	while (i < j)
	{
		ft_swap(&buffer[i++], &buffer[j--]);
		ft_tolower(buffer[i++]);
	}
	return (buffer);
}

