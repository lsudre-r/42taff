#include "printf.h"

int print_int(int val, char *buffer, int pos)
{
	char s[30];
	int i;
	i = 0;
	while(val)
	{
		if(val < 0)
		{
			val =~ val + 1;
		}
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
	return(pos);
}
