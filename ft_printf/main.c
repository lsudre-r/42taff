#include "includes/printf.h"

int main()
{
	printf("lol %%\n");
	ft_printf("lil %%\n");
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