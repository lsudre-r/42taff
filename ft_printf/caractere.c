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

int get_int_len(int value)
{
	int l = 1;
	while(value > 9)
	{
		l++; 
		value /= 10;
	}
	return l;
}

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

int print_strchar(char *tp, int i, char *buffer)
{
    while(*tp)
    {
        
        if(i==4096)
        {
            write(1, buffer, 4096);
            i = 0;
        }
        buffer[i++]=*tp++;
    }
    return(i);
}

int print_char(char c, int i, char *buffer)
{
	if(i == 4096)
	{
		write(1, buffer, 4096);
		i = 0;
	}
    buffer[i] = c;
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
                i = print_char(c, i, buffer);
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
	char c = 45;
    ft_printf("Hello %s %c","kishore", c);
    write(1, "\n", 1);
    printf("Hello %s %c","kishore", c);
    return 0;
}