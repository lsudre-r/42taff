/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:25:53 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/07 18:25:55 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	int		rv;
	char	sign;

	rv = 0;
	sign = 0;
	while (*s == '\t' || *s == '\n' || *s == '\r'
		|| *s == '\v' || *s == '\f' || *s == ' ')
		s++;
	if (*s == '-')
		sign = 1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		rv = (rv * 10) + (*s - '0');
		s++;
	}
	if (sign)
		return (-rv);
	else
		return (rv);
}
