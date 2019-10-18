/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:44:10 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/10 15:44:12 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (*((unsigned char*)s1 + 0) == '\0' || *((unsigned char*)s2 + 0) == '\0')
		return (*((unsigned char*)s1 + 0) - *((unsigned char*)s2 + 0));
	while ((*((unsigned char*)s1 + i) != '\0') && i < n)
	{
		if (*((unsigned char*)s1 + i) == *((unsigned char*)s2 + i))
			i++;
		else
			return (*((unsigned char*)s1 + i) - *((unsigned char*)s2 + i));
	}
	return (0);
}
