#include "printf.h"


char* ft_itoaB2Bm(unsigned int value, t_buffer buffer, int base)
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
	return (ft_reverseNlower((&buffer)->buf, d ,((&buffer)->i) - 1));
}

// char* ft_itoabasetobufferm(int value, char* buffer, int base, int i)
// {
// 	int		n;
// 	int		r;
// 	int		d;

// 	d = i;
// 	n = (value < 0) ? -value : value;
// 	while (n)
// 	{
// 		r = n % base;
// 		if (r >= 10) 
// 			buffer[i++] = 65 + (r - 10);
// 		else
// 			buffer[i++] = '0' + r;
// 		n = n / base;
// 	}
// 	if (i == 0)
// 		buffer[i++] = '0';
// 	if (value < 0 && base == 10)
// 		buffer[i++] = '-';
// 	buffer[i] = '\0';
// 	return (ft_reverseNlower(buffer, d , i - 1));
// }

//le faire avancer a lenver
