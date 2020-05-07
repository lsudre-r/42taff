#include "printf.h"

char* ft_reverseNlower(char *buffer, int i, int j)
{
	while (i < j)
	{
		buffer[i] = ft_tolower(buffer[i]);
		buffer[j] = ft_tolower(buffer[j]);
		ft_swap(&buffer[i++], &buffer[j--]);
	}

	return (buffer);
}

//cest si moche