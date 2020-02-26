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

int print_uint(unsigned int val, char *buffer, int pos)
{
    char s[30];
    int i;
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

int print_strchar(char *s, int i, char *buffer)
{
    while(*s)
    {
        
        if(i==4096)
        {
            write(1, buffer, 4096);
            i = 0;
        }
        buffer[i++]=*s++;
    }
    return(i);
}

// int print_char(void *c, int i, char *buffer)
// {
// 	if(i == 4096)
// 	{
// 		write(1, buffer, 4096);
// 		i = 0;
// 	}
// 	i++;
//     return(i);
// }

void ft_printf(const char * format ,...)
{
    char buffer[4096];

    va_list list;
    va_start(list,format);
    char ch;
    char *s;
    // void *c;
    unsigned int u;
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
                s = va_arg(list, char *);
                i = print_strchar(s, i, buffer);
            }
            if(ch == 'c')
            {
                // c = va_arg(list, void *);
                // i = print_char(c, i, buffer);
				i++;
            }
            if(ch == 'u')
            {
				u = va_arg(list, unsigned int);
				i = print_uint(u, buffer, i);
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
	unsigned int u = 4294775945;
	char c = 45;
    ft_printf("Hello %s %u %c","kishore", u, c);
    write(1, "\n", 1);
    printf("Hello %s %u %c","kishore", u, c);
    return 0;
}