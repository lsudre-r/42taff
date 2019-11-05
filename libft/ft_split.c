/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:03:57 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/16 17:03:59 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdcpy(char *dst, char const *src, char c)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && src[i] != c)
		++i;
	if (!(dst = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] != c)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		count_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			++i;
			while (*s && *s != c)
				++s;
		}
	}
	return (i);
}

void	*ft_clear(char **dst, int i)
{
	while (--i >= 0)
		free(dst[i]);
	free(dst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;

	i = 0;
	if (!s || !(dst = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			if (!(*(dst + i) = ft_strdcpy(*(dst + i), s, c)))
				return (ft_clear(dst, i));
			++i;
			while (*s && *s != c)
				++s;
		}
	}
	dst[i] = NULL;
	return (dst);
}
