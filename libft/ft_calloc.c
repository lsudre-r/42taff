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
		return (NULL);
	else
	{
		dst = malloc(coun * (size * sizeof(size_t)) + 1);
		dst = ft_memset(dst, 0, coun * sizeof(size_t));
		return (dst);
	}
}
