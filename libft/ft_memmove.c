/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:25:39 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/28 23:58:01 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
		while (n--)
			*((char*)dest + n) = *((char*)src + n);
	return (dest);
}
