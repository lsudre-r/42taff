/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:00:59 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/16 16:01:00 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isset(char c, char const *set)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(set);
	while (i < len)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	unsigned int	start;
	char			*res;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1) - 1;
	if (ft_isset(s1[start], set) == 1)
	{
		while (ft_isset(s1[start], set) == 1 && start < len)
			start++;
	}
	if (ft_isset(s1[len], set) == 1)
	{
		while (ft_isset(s1[len], set) == 1 && len >= start)
			len--;
	}
	len = len - start + 1;
	res = ft_substr(s1, start, len);
	return (res);
}
