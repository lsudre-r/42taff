/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:31:56 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/18 14:31:57 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(unsigned x)
{
	if (x >= 1000000000)
		return (10);
	if (x >= 100000000)
		return (9);
	if (x >= 10000000)
		return (8);
	if (x >= 1000000)
		return (7);
	if (x >= 100000)
		return (6);
	if (x >= 10000)
		return (5);
	if (x >= 1000)
		return (4);
	if (x >= 100)
		return (3);
	if (x >= 10)
		return (2);
	return (1);
}

char	*ft_itoa(int n)
{
	char			*ret;
	size_t			len;
	int				sign;
	unsigned int	nb;

	sign = (n < 0) ? 1 : 0;
	if (sign == 1)
		nb = -n;
	else
		nb = n;
	len = ft_intlen(nb) + sign;
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	while (len-- > (unsigned int)sign)
	{
		ret[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		ret[len] = '-';
	return (ret);
}
