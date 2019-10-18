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

int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int j;

	j = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	if (str[i - 1] == '-')
		j = -j;
	if (str[i] >= 48 && str[i] <= 57)
	{
		nbr = j * (str[i] - 48);
		while (str[i + 1] >= 48 && str[i + 1] <= 57)
		{
			nbr = j * (j * nbr * 10 + str[i + 1] - 48);
			i++;
		}
		return (nbr);
	}
	return (0);
}
