#include "printf.h"

void ft_utoaB2Bm(unsigned int value, t_buffer *buffer, int base)
{
	unsigned long int	n;
	int		r;
	char	s[52];
	int		pos;

	pos = 0;
	n = (value < 0) ? -value : value;
	while (n)
	{
		r = n % base;
		if (r >= 10) 
			s[pos++] = ('a' + (r - '\n'));
		else
			s[pos++] = ('0' + r);
		n = n / base;
	}
	if (buffer->i == 0)
		s[pos++] = '0';
	if (value < 0 && base == 10)
		s[pos++] = '-';
	s[pos] = '\0';
	while (pos >= 0)
		fill_buffer(buffer, s[pos--]);
}
