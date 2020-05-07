#include "printf.h"

char *fonc(unsigned int val, char *buffer, int pos)
{
	char s[30];
	int i;
	i = 0;
	while(val)
	{
		s[i++] = val % 10 + '0';
		val /= 10;
	}
	i--;
	if(pos + i > 4096)
	{
		write(1, buffer, 4096);
		pos = 0;
	}
	while(i >= 0)
		buffer[pos++] = s[i--];
	return(buffer);
}

int print_uint(unsigned int val, char *buffer, int pos)
{
	check_buffer(pos, buffer);
	if (val == 0)
		buffer = ft_nbchelou(val, buffer, pos);
	else
	{
		buffer = fonc(val, buffer, pos);
	}
	pos = pos + 15;
	return(pos);
}
