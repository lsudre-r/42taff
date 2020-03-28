#include "printf.h"

int main()
{
	unsigned int u = 4294775945;
	int c = 56;
    int c1 = 45;
	int a=10;
	int* ptr =&a;
    // ft_printf("Hello %% %s %s %u %c %%", "sdsd", "kishore", u, c);
    write(1, "\n", 1);
    printf("Hello %% %.09s %s %u %c %% %p", "sdsd", "kishore", u, c, ptr);
	write(1, "\n", 1);
	printf("%.09s", "kishore");
    return 0;
}