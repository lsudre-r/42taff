/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:36:08 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/16 14:36:10 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*((unsigned char*)(s + start)) != '\0' && i < len)
	{
		*((unsigned char*)(dst + i)) = *((unsigned char*)(s + start));
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}
