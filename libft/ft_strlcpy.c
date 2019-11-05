/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:07:22 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/07 15:07:25 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;

	i = 0;
	if (!dest || !src)
		return (0);
	src_length = ft_strlen(src);
	if (size != 0)
	{
		if (size <= src_length)
			while (i < size - 1)
			{
				dest[i] = src[i];
				i++;
			}
		else
			while (src[i] != '\0')
			{
				dest[i] = src[i];
				i++;
			}
		dest[i] = '\0';
	}
	return (src_length);
}
