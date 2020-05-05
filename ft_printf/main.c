#include "includes/printf.h"

int main()
{
	int a = 75684;
    ft_printf("1Helo %% %X %%\n", a);
	printf("2Helo %% %X %%\n", a);
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