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

#include "printf.h"

typedef struct	s_buffer
{
	char		buf[4096];
	int			i;
	int			size;
}	t_buffer;

// int print_ptr(void *ptr, int i, char *buffer)
// {
// 	while(ptr)
// 	{
// 		fill_buffer(i, buffer);
// 		buffer[i++] = ptr++;
// 	}
// 	return(i);
// }

// int print_ptr(void *val, char *buffer, int pos)
// {
// 	// faire fonctionner pour les hexa
// 	char s[30];
// 	int i;
	
// 	i = 0;
// 	while(val)
// 	{
// 		s[i++] = val % 16 + '0';
// 		val /= 10;
// 	}
// 	i--;
// 	if(pos + i > 4096)
// 	{
// 		write(1, buffer, 4096);
// 		pos = 0;
// 	}
// 	while(i >= 0)
// 		buffer[pos++] = s[i--];
// 	return(pos);
// }


int ft_printf(const char * format ,...)
{
	char buffer[4096];
	va_list list;
	va_start(list,format);
	char ch;
	char *s;
	char c;
	unsigned int u;
	int val;
	int hexm;
	//void *ptr;
	int i = 0;
	while((ch = *format))
	{
		if(i == 4096)
		{
			write(1, buffer, 4096);
			i = 0;
		}
		if(ch == '%')
		{
			ch = *++(format);
			if(ch == '%')
				i = print_percent(i, buffer);
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
				c = va_arg(list, int);
				i = print_char(c, i, buffer);
			}
			if(ch == 'u')
			{
				u = va_arg(list, unsigned int);
				i = print_uint(u, buffer, i);
			}
			if(ch == 'X')
			{
			    hexm = va_arg(list, int);
			    i = print_hexm(hexm, buffer, i);
			}
		} 
		else buffer[i++] = ch;
		format++;
	}
	va_end(list);
	write(1, buffer, i);
	return (0);
}
