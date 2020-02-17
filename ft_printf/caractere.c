/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caractere.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:24:52 by lsudre-r          #+#    #+#             */
/*   Updated: 2020/02/10 15:25:04 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// #include<stdarg.h>
// #include<stdio.h>

// int sum(int num_args, ...) 
// {
// 	int val = 0;
// 	va_list ap;
// 	int i;

// 	i = 0;
// 	va_start(ap, num_args);
// 	while(i++ < num_args)
// 	{
// 		val += va_arg(ap, int);
// 	}
// 	va_end(ap);
// 	return val;
// }
// int	main(void) 
// {
// 	printf("Sum of 10, 20 and 30 = %d\n",  sum(3, 10, 20, 30) );
// 	printf("Sum of 4, 20, 25 and 30 = %d\n",  sum(4, 4, 20, 25, 30) );
// 	return 0;
// }


// int		ft_printf(const char *fmt, ...)
// {
// 	va_list ap, ap2;
// 	int d;
// 	char c, *s;

// 	va_start(ap, fmt);
// 	va_copy(ap2, ap);
// 	while (*fmt)
// 	{
// 		if (fmt = 's')
// 			s = va_arg(ap, char *);
// 		else if (fmt ='d')
// 			d = va_arg(ap, int);
// 		else if(fmt = 'c')
// 			c = va_arg(ap, int);
// 	}
// 	va_end(ap);
// 	va_end(ap2);
// }


int print_int(int val, char *buffer, int pos)
{
    char s[30];
    int i = 0;
    while(val)
    {
        s[i++] = val % 10 + '0';
        val /= 10;
    }
    i--;
    if(pos + i > 4096)
    {
        fwrite(buffer,1,4096,stdout);
        pos = 0;
    }
    while(i >= 0)
        buffer[pos++] = s[i--];
    return(pos);
}

void ft_printf(const char * format ,...)
{
    char buffer[4096],ch;
    char *tp;
    va_list list;
    va_start(list,format);
    int val;
    int i = 0,j = 0;
    while(*format)
    {
        if(i == 4096)
        {
            fwrite(buffer,1,4096,stdout);
            i = 0;
        }
        if(ch == '%')
        {
            ch = *(format + 1);
            if(ch == 'd')
            {
                val = va_arg(list, int);
                i = print_int(val, buffer, i);
            }
            if(ch == 's')
            {
                tp = va_arg(list, char*);
                while(*tp)
                {
                    if(i==4096)
                    {
                        fwrite(stdout, buffer, 4096);
                        fwrite(buffer,1,4096,stdout);
                        i=0;
                    }
                    buffer[i++]=*tp++;
                }
            }
        } 
        else buffer[i++] = ch;
        format++;
    }
    va_end(list);
    fwrite(buffer,1,i,stdout);
}

int main()
{
    ft_printf("%d", 3);
    write(1, "\n", 1);
    printf("%d", 3);
    return 0;
}