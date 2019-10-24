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

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	if (!(dst = (char **)malloc(ft_strlen(s) * sizeof(char *))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			k = i;
			while (s[i++] != c)
				j++;
			ft_strncpy(dst[l], ((char*)(dst + i)), j);
			l++;
		}
	}
	return (dst);
}
