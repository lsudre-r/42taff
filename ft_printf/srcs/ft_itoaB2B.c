#include "printf.h"

char* ft_itoaB2B(unsigned int value, t_buffer buffer, int base)
{
	unsigned long int	n;
	int		r;
	int		d;

	d = (&buffer)->i;
	n = (value < 0) ? -value : value;
	while (n)
	{
		r = n % base;
		if (r >= 10) 
			//buffer[i++] = 65 + (r - 10);
			fill_buffer((&buffer), ('A' + (r - 10)));
		else
			//buffer[i++] = '0' + r;
			fill_buffer((&buffer), ('0' + r));
		n = n / base;
	}
	if ((&buffer)->i == 0)
		fill_buffer((&buffer), '0');
		//buffer[i++] = '0';
	if (value < 0 && base == 10)
		//buffer[i++] = '-';
		fill_buffer((&buffer), '-');
	return (ft_reverse((&buffer)->buf, d ,((&buffer)->i) - 1));
}

//pour les hex refaire une fonctioin to faire les int
//remplacer avec fill buffer
//mettre struct dans le fonction