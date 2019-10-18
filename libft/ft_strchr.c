/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:18:43 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/08 15:18:45 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	size_t	j;

	i = 0;
	j = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + j);
	while (s[i])
	{
		if (c == s[i])
			break ;
		i++;
	}
	if ((size_t)i == j)
		return (NULL);
	else
		return ((char *)s + i);
}
