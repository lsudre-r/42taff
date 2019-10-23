/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:38:49 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/08 15:38:50 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t res;
	size_t i;
	size_t j;

	i = 0;
	res = ft_strlen(src);
	while (dst[i] != '\0')
	{
		i++;
		if (size < i)
			return (res + size);
	}
	j = 0;
	while (src[j] != '\0' && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src + j));
}
