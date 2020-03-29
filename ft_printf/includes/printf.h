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
# define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_printf(const char * format ,...);
char	*ft_itoa(int n);
int     print_percent(int i, char *buffer);
int		print_char(int c, int i, char *buffer);
int		print_int(int val, char *buffer, int pos);
int		print_strchar(char *s, int i, char *buffer);
int		print_uint(unsigned int val, char *buffer, int pos);

#endif
