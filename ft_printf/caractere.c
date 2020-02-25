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
#include <unistd.h>

int print_int(int val, char *buffer, int pos)
{
    char s[30];
    int i;
    if(val < 0)
        i = 2;
	else
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
    return(pos);
}

int print_strchar(char *tp, int i, char *buffer)
{
    while(*tp)
    {
        
        if(i==4096)
        {
            write(1, buffer, 4096);
            i = 0;
            printf("ewefwe");
        }
        buffer[i++]=*tp++;
    }
    return(i);
}


void ft_printf(const char * format ,...)
{
    char buffer[4096];
    char ch;
    char *tp;
    char c;
    va_list list;
    va_start(list,format);
    int val;
    int i = 0;
    while((ch=*format))
    {
        if(i == 4096)
        {
            write(1, buffer, 4096);
            i = 0;
        }
        if(ch == '%')
        {
            ch = *++(format);
            if(ch == 'd' || ch == 'i')
            {
                val = va_arg(list, int);
                i = print_int(val, buffer, i);
            }
            if(ch == 's')
            {
                tp = va_arg(list, char *);
                i = print_strchar(tp, i, buffer);
            }
            if(ch == 'c')
            {
                c = va_arg(list, int);
                i = 1;
            }
        } 
        else buffer[i++] = ch;
        format++;
    }
    va_end(list);
    write(1, buffer, i);
}

int main()
{
    ft_printf("Hello %s %i","kishore", -111);
    write(1, "\n", 1);
    printf("Hello %s %i","kishore", -143);
    return 0;
}