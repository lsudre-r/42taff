/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 13:05:41 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/11 13:05:42 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t coun, size_t size)
{
	char	*dst;

	if (coun == 0 || size == 0)
	{
		coun = 1;
		size = 1;
	}
	if (!(dst = malloc(coun * size)))
		return (NULL);
	dst = ft_memset(dst, 0, coun * size);
	return (dst);
}
