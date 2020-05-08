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

int		check_buffer(int *i, char *buffer);
void 	ft_swap(char *x, char *y);
int		ft_tolower(int c);
char	*ft_reverseNlower(char *buffer, int i, int j);
char	*ft_reverse(char *buffer, int i, int j);
char	*ft_nbchelou(int value, char *buffer, int i);
char    *ft_itoabasetobufferm(int value, char* buffer, int base, int i);
char	*ft_itoabasetobuffer(unsigned int value, char* buffer, int base, int i);
int		ft_getintlen(int value);
int		ft_itoatobuffer(int n, char *buffer, int i);
char	*ft_itoa(int n);
int		print_percent(int i, char *buffer);
int		print_char(int c, int i, char *buffer);
int		print_int(int value, char *buffer, int i);
int		print_uint(unsigned int value, char *buffer, int i);
int		print_strchar(char *s, int i, char *buffer);
int     print_bighex(int hex, char *buffer, int i);
int 	print_smallhex(int hex, char *buffer, int i);
int		ft_printf(const char * format ,...);

#endif
