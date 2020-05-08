/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:24:52 by lsudre-r          #+#    #+#             */
/*   Updated: 2020/02/10 15:25:04 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#	define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 4096

typedef struct	s_buffer
{
	char		buf[BUFFER_SIZE];
	int			i;
	int			size;
}	t_buffer;

void	ft_bzero(void *s, size_t n);
void	fill_buffer(t_buffer *buffer, char c);
void 	ft_swap(char *x, char *y);
int		ft_tolower(int c);
char	*ft_reverseNlower(char *buffer, int i, int j);
char	*ft_reverse(char *buffer, int i, int j);
char	*ft_nbchelou(int value, t_buffer buffer);
char    *ft_itoaB2Bm(unsigned int value, t_buffer buffer, int base);
char	*ft_itoaB2B(unsigned int value, t_buffer buffer, int base);
int		ft_len_int(int value);
int		ft_itoatobuffer(int n, char *buffer, int i);
char	*ft_itoa(int n);
int		print_percent(t_buffer buffer);
int		print_char(int c, t_buffer buffer);
int		print_int(int value, t_buffer buffer);
int		print_uint(unsigned int value, t_buffer buffer);
int		print_strchar(char *s, t_buffer buffer);
int     print_bighex(int hex, t_buffer buffer);
int 	print_smallhex(int hex, t_buffer buffer);
int		ft_printf(const char * format ,...);

#endif
