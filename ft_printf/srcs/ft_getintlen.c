#include "printf.h"

int ft_getintlen(int value)
{
	int l = 1;
	while(value > 9)
	{
		l++; 
		value /= 10;
	}
	return l;
}
