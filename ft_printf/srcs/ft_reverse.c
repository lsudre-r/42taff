#include "printf.h"

char	*ft_reverse(char *buffer, int i, int j)
{
	while (i < j)
		ft_swap(&buffer[i++], &buffer[j--]);
	return (buffer);
}
