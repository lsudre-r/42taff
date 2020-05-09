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

int ft_printf(const char * format ,...)
{
	va_list 		list;
	char 			ch;
	char 			*s;
	char 			c;
	unsigned int	u;
	int 			val;
	int 			bighex;
	int 			smallhex;
	t_buffer		buffer;
	ft_bzero(&buffer, sizeof(buffer));
	va_start(list,format);
	while((ch = *format))
	{
		if(ch == '%')
		{
			
			ch = *++(format);
			if(ch == '%')
				print_percent(&buffer);
			if(ch == 'd' || ch == 'i')
			{
				val = va_arg(list, int);
				print_int(val, &buffer);
			}
			if(ch == 's')
			{
				s = va_arg(list, char *);
				print_strchar(s, &buffer);
			}
			if(ch == 'c')
			{
				c = va_arg(list, int);
				print_char(c, &buffer);
			}
			if(ch == 'u')
			{
				u = va_arg(list, unsigned int);
				print_uint(u, &buffer);
			}
			if(ch == 'X')
			{
				bighex = va_arg(list, int);
				print_bighex(bighex, &buffer);
			}
			if(ch == 'x')
			{
				smallhex = va_arg(list, int);
				print_smallhex(smallhex, &buffer);
			}
		} 
		else
			fill_buffer((&buffer), ch);
		format++;
	}
	va_end(list);
	write(1, (&buffer)->buf,(&buffer)->i);
	return (0);
}
