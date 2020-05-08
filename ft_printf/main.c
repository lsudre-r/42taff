#include "includes/printf.h"

int main()
{
	int b = -6514;

 ft_printf("1Helo %% %x %%\n", b);
	printf("2Helo %% %0.8x %%\n", b);
    return 0;
}

// int main(void)
// {
// 	char buffer[33];
// 	int value[] = { 11184810, -6514, 0, 127 };
// 	int base[]  = { 16, 16, 16, 16 };
// 	int e = 0;
// 	for (int i = 0; i < 4; i++)
// 	{
// 		printf("itoa(%d, buffer, %d) = %s\n", value[i], base[i], 
// 			ft_itoabasetobuffer(value[i], buffer, base[i], e));
//     }
// 	return 0;
// }