#include "printf.h"

char	*ft_nbchelou(int value, char *buffer, int i)
{
	char	*nbl;
	int		pos;

	if (value == 0)
	{
		buffer[i] = '0';
		return (buffer);
	}
	pos = 0;
	nbl = "-2147483648";
	if (value == -2147483648)
	{
		while (pos != 12)
		{
			buffer[i] = nbl[pos];
			i++;
			pos++;
		}
		return (buffer);
	}
	return (buffer);
}