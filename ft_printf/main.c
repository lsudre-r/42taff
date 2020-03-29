#include "printf.h"

int main()
{
	unsigned int u = 4294775945;
	int c = 56;
//    int c1 = 45;
    
   	ft_printf("Hello %% %s %s %u %c %%\n", "sdsd", "kishore", u, c);
    printf("Hello %% %.09s %s %u %c %% %p\n", "sdsd", "kishore", u, c, (void*)1);
	printf("%lx %p", (long unsigned int)&main, &main);
    return 0;
}
