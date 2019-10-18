/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:25:39 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/10 16:25:41 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*asrc;
	size_t	i;

	i = 0;
	asrc = (char *)src;
	while (i < n)
	{
		*((unsigned char*)(dest + i)) = asrc[i];
		i++;
	}
	return (dest);
}
