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

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = malloc(sizeof(char) + 1)))
		return (NULL);
	while (*((unsigned char*)(s + start)) != '\0' && len--)
	{
		*((unsigned char*)(s + start)) = *((unsigned char*)(s + i));
		i++;
		start++;
	}
	return (dst);
}
