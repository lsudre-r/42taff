/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsudre-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 15:42:59 by lsudre-r          #+#    #+#             */
/*   Updated: 2019/10/16 15:43:02 by lsudre-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	i;
	char	*dst;

	i = 0;
	s1_size = ft_strlen(s1);
	if (!(dst = malloc(sizeof(char *) + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		dst[i] = s2[i];
		i++;
	}
	dst[s1_size + i] = '\0';
	return (dst);
}
