#include "printf.h"

void 	ft_itoaB2B(int value, t_buffer *buffer, int base)
{
	unsigned int	n;
	int		r;
	char	s[56];
	int		pos;

	pos = 0;
	n = (value < 0) ? -value : value;
	while (n)
	{
		r = n % base;
		if (r >= 10) 
			s[pos++] = ('A' + (r - 10));
		else
			s[pos++] = ('0' + r);
		n = n / base;
	}
	if (buffer->i == 0)
		s[pos++] = '0';
	if (value < 0 && base == 10)
		s[pos++] = '-';
	while (pos >= 0)
		fill_buffer(buffer, s[pos--]);
}