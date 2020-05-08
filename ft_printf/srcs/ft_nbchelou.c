#include "printf.h"

char	*ft_nbchelou(int value, t_buffer buffer)
{
	char	*nbl;
	int		pos;

	if (value == 0)
	{
		//buffer[i] = '0';
		fill_buffer((&buffer), '0');
		return ((&buffer)->buf);
	}
	pos = 0;
	nbl = "-2147483648";
	if (value == -2147483648)
	{
		while (pos != 12)
		{
			//buffer[i] = nbl[pos];
			fill_buffer((&buffer), nbl[pos]);
			pos++;
		}
		return ((&buffer)->buf);
	}
	return ((&buffer)->buf);
}