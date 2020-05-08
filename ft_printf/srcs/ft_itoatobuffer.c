#include "printf.h"

int		ft_itoatobuffer(int n, char *buffer, int i)
{
	size_t			len;
	int				sign;
	unsigned int	nb;

	sign = (n < 0) ? 1 : 0;
	if (sign == 1)
		nb = -n;
	else
		nb = n;
	len = ft_getintlen(nb) + sign + i;
	buffer[i + len] = '\0';
	while (len-- > ((unsigned int)sign + i))
	{
		buffer[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		buffer[len] = '-';
	return (len);
}

//a supp ?