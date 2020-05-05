#include "includes/printf.h"

int main()
{
	unsigned int u = 6548846;
	int a = 2147483647;
	int b = 2147483647;
	int c = 2147483647;
	int d = 2147483647;
    ft_printf("1Helo %% %u %d %% %i %d %i %%\n", u, a, b, c, d);
	printf("2Helo %% %u %d %% %i %d %i %%\n", u, a, b, c, d);
    return 0;
}

// int main(void)
// {
// 	char buffer[33];

// 	int value[] = { 11184810, -25, 0, 127 };
// 	int base[]  = { 16, 10, 10, 2 };
// 	int e = 0;
	
// 	for (int i = 0; i < 4; i++)
// 	{
// 		printf("itoa(%d, buffer, %d) = %s\n", value[i], base[i], 
// 			ft_itoabasetobuffer(value[i], buffer, base[i], e));
// 	}

// 	return 0;
// }