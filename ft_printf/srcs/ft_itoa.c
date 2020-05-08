#include "printf.h"

char	*ft_itoa(int n)
{
	char			*ret;
	size_t			len;
	int				sign;
	unsigned int	nb;

	sign = (n < 0) ? 1 : 0;
	if (sign == 1)
		nb = -n;
	else
		nb = n;
	len = ft_len_int(nb) + sign;
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	while (len--> (unsigned int)sign)
	{
		ret[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		ret[len] = '-';
	return (ret);
}
